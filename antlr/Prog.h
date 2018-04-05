#pragma once


#include "antlr4-runtime.h"
#include "ProgBaseVisitor.h"
#include "../Struct/Param.h"
#include "../Struct/Program.h"
#include "../Struct/Var.h"
#include "../Struct/Expr/ExprBin.h"
#include "../Struct/Expr/ExprVar.h"
#include "../Struct/Expr/ExprConst.h"
#include "../Struct/Instr/Instr.h"
#include "../Struct/Instr/If.h"
#include "../Struct/Instr/Return.h"
#include "../Struct/Instr/While.h"
#include "../Struct/Expr/Affect.h"
#include "../Struct/Expr/FunctionCall.h"
#include "../Struct/Expr/ExprUni.h"


/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Prog : public ProgBaseVisitor {


private:
    std::map<std::pair<Block*,std::string>,Var*>* varTable;
    std::map<std::string,Function*>* functionTable;
    std::stack<Block*> *blockStack;
    Function* lastFunction;
    int addrCounter;

public:
    Prog() : ProgBaseVisitor(){
        varTable = new std::map<std::pair<Block*,std::string>,Var*>();
        blockStack = new std::stack<Block*>();
        blockStack->push(nullptr);
        functionTable = new std::map<std::string,Function*>();
        addrCounter = 8;
    }

    /* Table method */
    void printVarTable(){
        std::cout << "TABLE VAR:" << std::endl;

        for(auto it = varTable->cbegin(); it != varTable->cend(); ++it)
        {
            std::cout << it->first.second << "( Var:" << it->second;
            std::cout << " ) : Block :" << it->first.first << std::endl;
        }
    }

    void printFunctionTable(){
        std::cout << "TABLE FUNCTION:" << std::endl;
        for(auto it = functionTable->cbegin(); it != functionTable->cend(); ++it)
        {
            std::cout << it->first << " : " << it->second << std::endl;
        }
    }

    void refreshTableName(Block* currentBlock){
        Block *parentBlock = blockStack->top();
        for (auto it = varTable->begin(); it != varTable->end(); ++it ){
            Block* b = it->first.first;
            if(b == parentBlock){
                varTable->insert(std::make_pair(std::make_pair(currentBlock,it->first.second),it->second));
            }
        }
    }

    void addVar(Block *b, Var* var)
    {
        std::string varName = var->getName();
        if(varTable->find(std::make_pair(b,varName)) != varTable->end()){
            //Var already exists
            std::cerr << "Variable name '" << varName << "' already exists" << std::endl;
        }
        else{
            //Adding a new variable
            std::pair<Block*,std::string> pair (b,varName);
            varTable->insert(std::make_pair(pair,var));
        }
    }

    Var* getVar(Block* b,std::string varName){
        if(varTable->find(std::make_pair(b,varName)) != varTable->end()){
            //Variable exists
            return varTable->at(std::make_pair(b,varName));
        }
//        return nullptr;
        std::cerr<<"Variable '"<<varName<<"' undefined here"<<std::endl;
        std::cerr.flush();
        exit(3);
    }

    void addFunction(std::string name,Function* f){

        if ( !functionTable->insert( std::make_pair(name,f)).second) {
            std::cerr << "Function '"<<name<<"' already exists" << std::endl;
            std::cerr.flush();
            exit(4);
        }
        lastFunction = f;
    }

    Function* getFunction(std::string name){
        if(functionTable->find(name) != functionTable->end()){
            //function exists
            return functionTable->at(name);
        }
        std::cerr<<"Function '"<<name<<"' undefined"<<std::endl;
        std::cerr.flush();
        exit(5);
    }

    virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *ctx) override {
        Program* prog = new Program();
        std::vector<ProgParser::GlobalVarContext*> globalVarChild = ctx->globalVar();
        for(auto i : globalVarChild){
            //Adding global var
            GlobalVar* gv = visit(i);
            prog->addGlobalVar(gv);
            this->addVar(nullptr,gv);
        }

        //Adding default function
        Function* putCharFunction = new Function("putchar",RetType::VOID);
        putCharFunction->addParam(new Param(SigType::CHAR,"output"));
        Function* getCharFunction = new Function("getchar",RetType::CHAR);
        functionTable->insert( std::make_pair("putchar",putCharFunction));
        functionTable->insert( std::make_pair("getchar",getCharFunction));

        std::vector<ProgParser::FunctionContext*> functionChild = ctx->function();
        for(auto i : functionChild){
            //Adding functions
            Function* f =visit(i);
            prog->addFunction(f);
            f->setProgram(prog);
        }
        prog->setFunctionTable(this->functionTable);
        prog->setVarTable(this->varTable);
//        printFunctionTable();
//        printVarTable();
        return prog;
    }

    virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *ctx) override {
        GlobalVar* gv = new GlobalVar(visit(ctx->type()),visit(ctx->name()),visit(ctx->expr()));
        return gv;
    }

    virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *ctx) override {
        Function* f = new Function(ctx->NAME()->getText(),visit(ctx->retType()));
        addFunction(ctx->NAME()->getText(),f);

        ProgParser::SigParamsContext* sigParamsChild = ctx->sigParams();
        if(sigParamsChild){
            // Function has params
            for(auto i : sigParamsChild->sigDeclare()){
                Param* param = new Param(visit(i->sigType()),visit(i->name()));
                f->addParam(param);
            }
        }

        Block* block = visit(ctx->block());
        f->addBlock(block);

        return f;
    }

    virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *ctx) override {
        Block* block = new Block();
        this->refreshTableName(block);
        blockStack->push(block);

        std::vector<ProgParser::DeclareContext*> declareChild = ctx->declare();
        for(auto i : declareChild){
            //Adding declares
            Var* var = visit(i);
            block->addDeclare(var);
            this->addVar(block,var);
        }

        std::vector<ProgParser::InstructionContext*> instructionChild = ctx->instruction();
        for(auto i : instructionChild){
            //Adding instructions
            Instr* instr = visit(i);
            instr->setParentBlock(block);
            block->addInstruction(instr);
        }
        blockStack->pop();
        return block;
    }

    virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *ctx) override {
        Var *var = new Var(visit(ctx->type()),visit(ctx->name()),0);
        var->setAddr(addrCounter);
        addrCounter += 8;
        return var;
    }

    virtual antlrcpp:: Any visitInstruction(ProgParser::InstructionContext *ctx) override {
        if(ctx->ifStatement()) {
            return (Instr*)visit(ctx->ifStatement());
        } else if (ctx->returnStatement()) {
            return (Instr*)visit(ctx->returnStatement());
        } else if (ctx->whileStatement()) {
            return (Instr*)visit(ctx->whileStatement());
        } else if (ctx->expr()) {
            Instr *instr = new Instr((Expr*)visit(ctx->expr()));
            return instr;
        }
        return nullptr;
    }

    virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *ctx) override {
        Return *ret;
        if (ctx->expr()) {
            ret = new Return((Expr*)visit(ctx->expr()),this->lastFunction);
        } else {
            ret = new Return(nullptr,this->lastFunction);
        }
        return (Instr*)ret;
    }

    virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *ctx) override {
        ProgParser::ElseStatementContext* elseChild = ctx->elseStatement();
        if(elseChild){
            Expr *expr = visit(ctx->expr());
            Block *blockIf = visit(ctx->block());
            Block *blockElse = visit(elseChild->block());
            If* ifStat = new If(expr,blockIf,blockElse);
            return (Instr*)ifStat;
        }
        else{
            If* ifStat = new If(visit(ctx->expr()),visit(ctx->block()));
            return (Instr*)ifStat;
        }

    }

    virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *ctx) override {
        ProgParser::IfStatementContext* ifStatChild = ctx->ifStatement();
        if(ifStatChild){
            //Statement is an "else if"
            std::cout << "Statement is an else if" << std::endl;
            If* ifStat = new If(visit(ifStatChild->expr()),visit(ctx->block()));
            visitChildren(ctx);
            return (Instr*)ifStat;
        }
        else{
            //Statement is an "else", no expr
            std::cout << "Statement is an else" << std::endl;
            If* ifStat = new If(nullptr,visit(ctx->block()));
            visitChildren(ctx);
            return (Instr*)ifStat;
        }
    }

    virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *ctx) override {
        While* whileStat = new While(visit(ctx->expr()),visit(ctx->block()));
        visitChildren(ctx);
        return (Instr*)whileStat;
    }

    virtual antlrcpp::Any visitType(ProgParser::TypeContext *ctx) override {
        std::string type = ctx->getText();
        if(type == "int32_t")      return Type::INT32_T;
        else if(type == "int64_t") return Type::INT64_T;
        else if(type == "char")    return Type::CHAR;
        else                       return Type::INT64_T; // By default
    }

    virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *ctx) override {
        std::string type = ctx->getText();
        if(type == "int32_t")           return SigType::INT32_T;
        else if(type == "int32_t[]")    return SigType::INT32_T_ARRAY;
        else if(type == "int64_t")      return SigType::INT64_T;
        else if(type == "int64_t[]")    return SigType::INT64_T_ARRAY;
        else if(type == "char")         return SigType::CHAR;
        else if(type == "char[]")       return SigType::CHAR_ARRAY;
        else                            return SigType::INT64_T; // By default
    }

    virtual antlrcpp::Any visitRetType(ProgParser::RetTypeContext *ctx) override {
        std::string type = ctx->getText();
        if(type == "int32_t")      return RetType::INT32_T;
        else if(type == "int64_t") return RetType::INT64_T;
        else if(type == "char")    return RetType::CHAR;
        else if(type == "void")    return RetType::VOID;
        else                       return RetType::VOID; // By default
    }

    virtual antlrcpp::Any visitSigParams(ProgParser::SigParamsContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSigDeclare(ProgParser::SigDeclareContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParams(ProgParser::ParamsContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVariable(ProgParser::VariableContext *ctx) override
    {
        std::string value = ctx->getText();
        Var *var = this->getVar(blockStack->top(), value);
        ExprVar *expr = new ExprVar(var,blockStack->top());
        return (Expr *) expr;
    }

    virtual antlrcpp::Any visitConst(ProgParser::ConstContext *ctx) override {
        ExprConst *expr = new ExprConst((int)visit(ctx->constant()),blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitConstant(ProgParser::ConstantContext *ctx) override {
        if(ctx->CHARACTER())
        {
            if(ctx->CHARACTER()->getText()[1] == '\\' && ctx->CHARACTER()->getText().size() >=2){
                switch(ctx->CHARACTER()->getText()[2]){
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
            return (int)ctx->CHARACTER()->getText()[1];
        } else {
            return std::stoi(ctx->NUMBER()->getText());
        }
    }

    virtual antlrcpp::Any visitName(ProgParser::NameContext *ctx) override {
        return ctx->getText();
    }

    virtual antlrcpp::Any visitPar(ProgParser::ParContext *ctx) override {
        return (Expr*)visit(ctx->expr());
    }

    virtual antlrcpp::Any visitInf(ProgParser::InfContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::INF,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::EGAL,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitMult(ProgParser::MultContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MULT,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *ctx) override {
        Var* var = this->getVar(blockStack->top(),ctx->name()->getText());
        Affect *affect = new Affect(var,visit(ctx->expr()),blockStack->top());
        return (Expr*)affect;
    }

    virtual antlrcpp::Any visitOr(ProgParser::OrContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::OR,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::DIFF,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitNo(ProgParser::NoContext *ctx) override {
        Expr* e = visit(ctx->expr());
        ExprUni* expr = new ExprUni(e,ExprUniType::NO,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::PLUS,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitSup(ProgParser::SupContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::SUP,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitAnd(ProgParser::AndContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::AND,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitInv(ProgParser::InvContext *ctx) override {
        ExprUni* expr = new ExprUni(visit(ctx->expr()),ExprUniType::INV,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitDiv(ProgParser::DivContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::DIV,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitCallfunction(ProgParser::CallfunctionContext *ctx) override {
        Function* f = getFunction(ctx->NAME()->getText());
        FunctionCall *fc = new FunctionCall(f,blockStack->top());
        ProgParser::ParamsContext *paramChild = ctx->params();
        if(paramChild != nullptr){
            for (auto i : paramChild->expr()) {
                //Adding global var
                fc->addParam(visit(i));
            }
        }

        // std::cout << "parent : " << ctx->parent->getText() << std::endl;
        return (Expr *) fc;


    }

    virtual antlrcpp::Any visitPredecr(ProgParser::PredecrContext *ctx) override {
        Var* var = this->getVar(blockStack->top(),ctx->name()->getText());
        ExprVar* ev = new ExprVar(var,blockStack->top());
        ExprUni* expr = new ExprUni(ev,ExprUniType::PREDECR,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitPostdecr(ProgParser::PostdecrContext *ctx) override {
        Var* var = this->getVar(blockStack->top(),ctx->name()->getText());
        ExprVar* ev = new ExprVar(var,blockStack->top());
        ExprUni* expr = new ExprUni(ev,ExprUniType::POSTDECR,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitSupegal(ProgParser::SupegalContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::SUPEGAL,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitMinus(ProgParser::MinusContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MINUS,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *ctx) override {
        Var* var = this->getVar(blockStack->top(),ctx->name()->getText());
        ExprVar* ev = new ExprVar(var,blockStack->top());
        ExprUni* expr = new ExprUni(ev,ExprUniType::POSTINCR,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitPreincr(ProgParser::PreincrContext *ctx) override {
        Var* var = this->getVar(blockStack->top(),ctx->name()->getText());
        ExprVar* ev = new ExprVar(var,blockStack->top());
        ExprUni* expr = new ExprUni(ev,ExprUniType::PREINCR,blockStack->top());
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MODULO,expr2,blockStack->top());
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *ctx) override {
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::INFEGAL,expr2,blockStack->top());
        return (Expr*)exprBin;
    }


};

