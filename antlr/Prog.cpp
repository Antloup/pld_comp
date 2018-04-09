#include "Prog.h"

Prog::~Prog() {}

Prog::Prog() : ProgBaseVisitor() {
    varTable = new std::map<std::pair<Block *, std::string>, Var *>();
    blockStack = new std::stack<Block *>();
    blockStack->push(nullptr);
    functionTable = new std::map<std::string, Function *>();
    addrCounter = 8;
}

/* Table method */
void Prog::printVarTable() {
    std::cout << "TABLE VAR:" << std::endl;

    for (auto it = varTable->cbegin(); it != varTable->cend(); ++it) {
        std::cout << it->first.second << "( Var:" << it->second;
        std::cout << " ) : Block :" << it->first.first << std::endl;
    }
}

void Prog::printFunctionTable() {
    std::cout << "TABLE FUNCTION:" << std::endl;
    for (auto it = functionTable->cbegin(); it != functionTable->cend(); ++it) {
        std::cout << it->first << " : " << it->second << std::endl;
    }
}

void Prog::refreshTableName(Block *currentBlock) {
    Block *parentBlock = blockStack->top();
    for (auto it = varTable->begin(); it != varTable->end(); ++it) {
        Block *b = it->first.first;
        if (b == parentBlock) {
            varTable->insert(std::make_pair(std::make_pair(currentBlock, it->first.second), it->second));
        }
    }
}

void Prog::addVar(Block *b, Var *var) {
    std::string varName = var->getName();
    if (varTable->find(std::make_pair(b, varName)) != varTable->end()) {
        //Var already exists
        std::cerr << "Variable name '" << varName << "' already exists" << std::endl;
    } else {
        //Adding a new variable
        std::pair<Block *, std::string> pair(b, varName);
        varTable->insert(std::make_pair(pair, var));
    }
}

Var *Prog::getVar(Block *b, std::string varName) {
    if (varTable->find(std::make_pair(b, varName)) != varTable->end()) {
        //Variable exists
        return varTable->at(std::make_pair(b, varName));
    }
//        return nullptr;
    std::cerr << "Variable '" << varName << "' undefined here" << std::endl;
    std::cerr.flush();
    exit(3);
}

void Prog::addFunction(std::string name, Function *f) {

    if (!functionTable->insert(std::make_pair(name, f)).second) {
        std::cerr << "Function '" << name << "' already exists" << std::endl;
        std::cerr.flush();
        exit(4);
    }
    lastFunction = f;
}

Function *Prog::getFunction(std::string name) {
    if (functionTable->find(name) != functionTable->end()) {
        //function exists
        return functionTable->at(name);
    }
    std::cerr << "Function '" << name << "' undefined" << std::endl;
    std::cerr.flush();
    exit(5);
}

antlrcpp::Any Prog::visitProgram(ProgParser::ProgramContext *ctx) {
    Program *prog = new Program();
    std::vector<ProgParser::GlobalVarContext *> globalVarChild = ctx->globalVar();
    for (auto i : globalVarChild) {
        //Adding global var
        GlobalVar *gv = visit(i);
        prog->addGlobalVar(gv);
        this->addVar(nullptr, gv);
    }

    //Adding default function
    Function *putCharFunction = new Function("putchar", RetType::VOID);
    putCharFunction->addParam(new Param(SigType::CHAR, "output"));
    Function *getCharFunction = new Function("getchar", RetType::CHAR);
    functionTable->insert(std::make_pair("putchar", putCharFunction));
    functionTable->insert(std::make_pair("getchar", getCharFunction));

    std::vector<ProgParser::FunctionContext *> functionChild = ctx->function();
    for (auto i : functionChild) {
        //Adding functions
        Function *f = visit(i);
        prog->addFunction(f);
        f->setProgram(prog);
    }
    prog->setFunctionTable(this->functionTable);
    prog->setVarTable(this->varTable);
//        printFunctionTable();
//        printVarTable();
    return prog;
}

antlrcpp::Any Prog::visitGlobalVar(ProgParser::GlobalVarContext *ctx) {
    GlobalVar *gv = new GlobalVar(visit(ctx->type()), visit(ctx->name()), visit(ctx->expr()));
    return gv;
}

antlrcpp::Any Prog::visitFunction(ProgParser::FunctionContext *ctx) {
    Function *f = new Function(ctx->NAME()->getText(), visit(ctx->retType()));
    addFunction(ctx->NAME()->getText(), f);

    ProgParser::SigParamsContext *sigParamsChild = ctx->sigParams();
    if (sigParamsChild) {
        // Function has params
        for (auto i : sigParamsChild->sigDeclare()) {
            Param *param = new Param(visit(i->sigType()), visit(i->name()));
            f->addParam(param);
        }
    }

    Block *block = visit(ctx->block());
    f->addBlock(block);

    return f;
}

antlrcpp::Any Prog::visitBlock(ProgParser::BlockContext *ctx) {
    Block *block = new Block();
    this->refreshTableName(block);
    blockStack->push(block);

    std::vector<ProgParser::DeclareContext *> declareChild = ctx->declare();
    for (auto i : declareChild) {
        //Adding declares
        Var *var = visit(i);
        block->addDeclare(var);
        this->addVar(block, var);
    }

    std::vector<ProgParser::InstructionContext *> instructionChild = ctx->instruction();
    for (auto i : instructionChild) {
        //Adding instructions
        Instr *instr = visit(i);
        instr->setParentBlock(block);
        block->addInstruction(instr);
    }
    blockStack->pop();
    return block;
}

antlrcpp::Any Prog::visitDeclare(ProgParser::DeclareContext *ctx) {
    Var *var = new Var(visit(ctx->type()), visit(ctx->name()), 0);
    var->setAddr(addrCounter);
    addrCounter += 8;
    return var;
}

antlrcpp::Any Prog::visitInstruction(ProgParser::InstructionContext *ctx) {
    if (ctx->ifStatement()) {
        return (Instr *) visit(ctx->ifStatement());
    } else if (ctx->returnStatement()) {
        return (Instr *) visit(ctx->returnStatement());
    } else if (ctx->whileStatement()) {
        return (Instr *) visit(ctx->whileStatement());
    } else if (ctx->expr()) {
        Instr *instr = new Instr((Expr *) visit(ctx->expr()));
        return instr;
    }
    return nullptr;
}

antlrcpp::Any Prog::visitReturnStatement(ProgParser::ReturnStatementContext *ctx) {
    Return *ret;
    if (ctx->expr()) {
        ret = new Return((Expr *) visit(ctx->expr()), this->lastFunction);
    } else {
        ret = new Return(nullptr, this->lastFunction);
    }
    return (Instr *) ret;
}

antlrcpp::Any Prog::visitIfStatement(ProgParser::IfStatementContext *ctx) {
    ProgParser::ElseStatementContext *elseChild = ctx->elseStatement();
    if (elseChild) {
        Expr *expr = visit(ctx->expr());
        Block *blockIf = visit(ctx->block());
        Block *blockElse = visit(elseChild->block());
        If *ifStat = new If(expr, blockIf, blockElse);
        return (Instr *) ifStat;
    } else {
        If *ifStat = new If(visit(ctx->expr()), visit(ctx->block()));
        return (Instr *) ifStat;
    }

}

antlrcpp::Any Prog::visitElseStatement(ProgParser::ElseStatementContext *ctx) {
    ProgParser::IfStatementContext *ifStatChild = ctx->ifStatement();
    if (ifStatChild) {
        //Statement is an "else if"
        std::cout << "Statement is an else if" << std::endl;
        If *ifStat = new If(visit(ifStatChild->expr()), visit(ctx->block()));
        visitChildren(ctx);
        return (Instr *) ifStat;
    } else {
        //Statement is an "else", no expr
        std::cout << "Statement is an else" << std::endl;
        If *ifStat = new If(nullptr, visit(ctx->block()));
        visitChildren(ctx);
        return (Instr *) ifStat;
    }
}

antlrcpp::Any Prog::visitWhileStatement(ProgParser::WhileStatementContext *ctx) {
    While *whileStat = new While(visit(ctx->expr()), visit(ctx->block()));
    visitChildren(ctx);
    return (Instr *) whileStat;
}

antlrcpp::Any Prog::visitType(ProgParser::TypeContext *ctx) {
    std::string type = ctx->getText();
    if (type == "int32_t") return Type::INT32_T;
    else if (type == "int64_t") return Type::INT64_T;
    else if (type == "char") return Type::CHAR;
    else return Type::INT64_T; // By default
}

antlrcpp::Any Prog::visitSigType(ProgParser::SigTypeContext *ctx) {
    std::string type = ctx->getText();
    if (type == "int32_t") return SigType::INT32_T;
    else if (type == "int32_t[]") return SigType::INT32_T_ARRAY;
    else if (type == "int64_t") return SigType::INT64_T;
    else if (type == "int64_t[]") return SigType::INT64_T_ARRAY;
    else if (type == "char") return SigType::CHAR;
    else if (type == "char[]") return SigType::CHAR_ARRAY;
    else return SigType::INT64_T; // By default
}

antlrcpp::Any Prog::visitRetType(ProgParser::RetTypeContext *ctx) {
    std::string type = ctx->getText();
    if (type == "int32_t") return RetType::INT32_T;
    else if (type == "int64_t") return RetType::INT64_T;
    else if (type == "char") return RetType::CHAR;
    else if (type == "void") return RetType::VOID;
    else return RetType::VOID; // By default
}

antlrcpp::Any Prog::visitSigParams(ProgParser::SigParamsContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any Prog::visitSigDeclare(ProgParser::SigDeclareContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any Prog::visitParams(ProgParser::ParamsContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any Prog::visitVariable(ProgParser::VariableContext *ctx) {
    std::string value = ctx->getText();
    Var *var = this->getVar(blockStack->top(), value);
    ExprVar *expr = new ExprVar(var, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitConst(ProgParser::ConstContext *ctx) {
    ExprConst *expr = new ExprConst((int) visit(ctx->constant()), blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitConstant(ProgParser::ConstantContext *ctx) {
    if (ctx->CHARACTER()) {
        if (ctx->CHARACTER()->getText()[1] == '\\' && ctx->CHARACTER()->getText().size() >= 2) {
            switch (ctx->CHARACTER()->getText()[2]) {
                case '0':
                    return 0;
                case 'a':
                    return 7;
                case 'b':
                    return 8;
                case 'f':
                    return 12;
                case 'n':
                    return 10;
                case 'r':
                    return 13;
                case 't':
                    return 9;
                case 'v':
                    return 11;
            }
        }
        return (int) ctx->CHARACTER()->getText()[1];
    } else {
        return std::stoi(ctx->NUMBER()->getText());
    }
}

antlrcpp::Any Prog::visitName(ProgParser::NameContext *ctx) {
    return ctx->getText();
}

antlrcpp::Any Prog::visitPar(ProgParser::ParContext *ctx) {
    return (Expr *) visit(ctx->expr());
}

antlrcpp::Any Prog::visitInf(ProgParser::InfContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::INF, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitEgal(ProgParser::EgalContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::EGAL, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitMult(ProgParser::MultContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::MULT, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitAffect(ProgParser::AffectContext *ctx) {
    Var *var = this->getVar(blockStack->top(), ctx->name()->getText());
    Affect *affect = new Affect(var, visit(ctx->expr()), blockStack->top());
    return (Expr *) affect;
}

antlrcpp::Any Prog::visitOr(ProgParser::OrContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::OR, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitDiff(ProgParser::DiffContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::DIFF, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitNo(ProgParser::NoContext *ctx) {
    Expr *e = visit(ctx->expr());
    ExprUni *expr = new ExprUni(e, ExprUniType::NO, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitPlus(ProgParser::PlusContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::PLUS, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitSup(ProgParser::SupContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::SUP, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitAnd(ProgParser::AndContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::AND, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitInv(ProgParser::InvContext *ctx) {
    ExprUni *expr = new ExprUni(visit(ctx->expr()), ExprUniType::INV, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitDiv(ProgParser::DivContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::DIV, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitCallfunction(ProgParser::CallfunctionContext *ctx) {
    Function *f = getFunction(ctx->NAME()->getText());
    FunctionCall *fc = new FunctionCall(f, blockStack->top());
    ProgParser::ParamsContext *paramChild = ctx->params();
    if (paramChild != nullptr) {
        for (auto i : paramChild->expr()) {
            //Adding global var
            fc->addParam(visit(i));
        }
    }

    // std::cout << "parent : " << ctx->parent->getText() << std::endl;
    return (Expr *) fc;


}

antlrcpp::Any Prog::visitPredecr(ProgParser::PredecrContext *ctx) {
    Var *var = this->getVar(blockStack->top(), ctx->name()->getText());
    ExprVar *ev = new ExprVar(var, blockStack->top());
    ExprUni *expr = new ExprUni(ev, ExprUniType::PREDECR, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitPostdecr(ProgParser::PostdecrContext *ctx) {
    Var *var = this->getVar(blockStack->top(), ctx->name()->getText());
    ExprVar *ev = new ExprVar(var, blockStack->top());
    ExprUni *expr = new ExprUni(ev, ExprUniType::POSTDECR, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitSupegal(ProgParser::SupegalContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::SUPEGAL, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitMinus(ProgParser::MinusContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::MINUS, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitPostincr(ProgParser::PostincrContext *ctx) {
    Var *var = this->getVar(blockStack->top(), ctx->name()->getText());
    ExprVar *ev = new ExprVar(var, blockStack->top());
    ExprUni *expr = new ExprUni(ev, ExprUniType::POSTINCR, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitPreincr(ProgParser::PreincrContext *ctx) {
    Var *var = this->getVar(blockStack->top(), ctx->name()->getText());
    ExprVar *ev = new ExprVar(var, blockStack->top());
    ExprUni *expr = new ExprUni(ev, ExprUniType::PREINCR, blockStack->top());
    return (Expr *) expr;
}

antlrcpp::Any Prog::visitModulo(ProgParser::ModuloContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::MODULO, expr2, blockStack->top());
    return (Expr *) exprBin;
}

antlrcpp::Any Prog::visitInfegal(ProgParser::InfegalContext *ctx) {
    std::vector<ProgParser::ExprContext *> child = ctx->expr();

    Expr *expr1 = (Expr *) (visit(child.at(0)));
    Expr *expr2 = (Expr *) (visit(child.at(1)));
    ExprBin *exprBin = new ExprBin(expr1, ExprBinType::INFEGAL, expr2, blockStack->top());
    return (Expr *) exprBin;
}

