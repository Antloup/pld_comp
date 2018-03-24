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


/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Prog : public ProgBaseVisitor {
public:

    virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *ctx) override {
        Program* prog = new Program();
        std::vector<ProgParser::GlobalVarContext*> globalVarChild = ctx->globalVar();
        for(auto i : globalVarChild){
            //Adding global var
            prog->addGlobalVar(visit(i));
        }

        std::vector<ProgParser::FunctionContext*> functionChild = ctx->function();
        for(auto i : functionChild){
            //Adding functions
            Function *f = visit(i);
            prog->addFunction(f);
        }

        prog->print();
        return prog;
    }

    virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *ctx) override {
        GlobalVar* gv = new GlobalVar(visit(ctx->type()),visit(ctx->name()),visit(ctx->expr()));
        gv->print();
        return gv;
    }

    virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *ctx) override {
        Function* f = new Function(ctx->NAME()->getText(),visit(ctx->retType()));

        ProgParser::SigParamsContext* sigParamsChild = ctx->sigParams();
        if(sigParamsChild){
            // Function has params
            for(auto i : sigParamsChild->sigDeclare()){
                Param* param = new Param(visit(i->sigType()),visit(i->name()));
                f->addParam(param);
            }
        }

        ProgParser::BlockContext* blockChild= ctx->block();
        f->addBlock(visit(blockChild));
        f->print();

        return f;
    }

    virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *ctx) override {
        Block* block = new Block();

        std::vector<ProgParser::DeclareContext*> declareChild = ctx->declare();
        for(auto i : declareChild){
            //Adding declares
            block->addDeclare(visit(i));
        }

        std::vector<ProgParser::InstructionContext*> instructionChild = ctx->instruction();
        for(auto i : instructionChild){
            //Adding instructions
            block->addInstruction(visit(i));
        }

        return block;
    }

    virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *ctx) override {
        Var *var = new Var(visit(ctx->type()),visit(ctx->name()),0);
        return var;
    }

    virtual antlrcpp:: Any visitInstruction(ProgParser::InstructionContext *ctx) override {
        Instr* instr = new Instr((Expr*)visit(ctx->expr()));
        return instr;
    }

    virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *ctx) override {
        Return* ret = new Return((Expr*)visit(ctx->expr()));
        return ret;
    }

    virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *ctx) override {
        ProgParser::ElseStatementContext* elseChild = ctx->elseStatement();
        if(elseChild){
            If* ifStat = new If(visit(ctx->expr()),visit(ctx->block()),visit(elseChild->block()));
            return ifStat;
        }
        else{
            If* ifStat = new If(visit(ctx->expr()),visit(ctx->block()));
            return ifStat;
        }

    }

    virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *ctx) override {
        ProgParser::IfStatementContext* ifStatChild = ctx->ifStatement();
        if(ifStatChild){
            //Statement is an "else if"
            std::cout << "Statement is an else if" << std::endl;
            If* ifStat = new If(visit(ifStatChild->expr()),visit(ctx->block()));
            visitChildren(ctx);
            return ifStat;
        }
        else{
            //Statement is an "else", no expr
            std::cout << "Statement is an else" << std::endl;
            If* ifStat = new If(nullptr,visit(ctx->block()));
            visitChildren(ctx);
            return ifStat;
        }
    }

    virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *ctx) override {
        While* whileStat = new While(visit(ctx->expr()),visit(ctx->block()));
        visitChildren(ctx);
        return whileStat;
    }

    virtual antlrcpp::Any visitType(ProgParser::TypeContext *ctx) override {
        std::cout<<"Visited Type"<<std::endl;
        std::string type = ctx->getText();
        if(type == "int32_t")      return Type::INT32_T;
        else if(type == "int64_t") return Type::INT64_T;
        else if(type == "char")    return Type::CHAR;
        else                       return Type::INT64_T; // By default
    }

    virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *ctx) override {
        std::cout<<"Visited SigType"<<std::endl;
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
        std::cout<<"Visited RetType"<<std::endl;
        std::string type = ctx->getText();
        if(type == "int32_t")      return RetType::INT32_T;
        else if(type == "int64_t") return RetType::INT64_T;
        else if(type == "char")    return RetType::CHAR;
        else if(type == "void")    return RetType::VOID;
        else                       return RetType::VOID; // By default
    }

    virtual antlrcpp::Any visitSigParams(ProgParser::SigParamsContext *ctx) override {
        std::cout<<"Visited SigParams"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSigDeclare(ProgParser::SigDeclareContext *ctx) override {
        std::cout<<"Visited SigDeclare"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParams(ProgParser::ParamsContext *ctx) override {
        std::cout<<"Visited Params"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVariable(ProgParser::VariableContext *ctx) override {
        std::string value = ctx->getText();
        //TODO verif var existe (on pourra alors récupérer un pointeur vers la Var, avec son type)
        ExprVar *expr = new ExprVar(new Var(Type::INT64_T, value, 0));
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitConst(ProgParser::ConstContext *ctx) override {
        ExprConst *expr = new ExprConst((int)visit(ctx->constant()));
        return (Expr*)expr;
    }

    virtual antlrcpp::Any visitConstant(ProgParser::ConstantContext *ctx) override {
        if(ctx->CHARACTER())
        {
            return (int)ctx->CHARACTER()->getText()[1];
        } else {
            return std::stoi(ctx->NUMBER()->getText());
        }
    }

    virtual antlrcpp::Any visitName(ProgParser::NameContext *ctx) override {
        std::cout<<"Visited Name"<<std::endl;
        return ctx->getText();
    }

    virtual antlrcpp::Any visitPar(ProgParser::ParContext *ctx) override {
        std::cout<<"Visited Par"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInf(ProgParser::InfContext *ctx) override {
        std::cout<<"Visited inf"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::INF,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *ctx) override {
        std::cout<<"Visited Egal"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::EGAL,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitMult(ProgParser::MultContext *ctx) override {
        std::cout<<"Visited Mult"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MULT,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *ctx) override {
        std::cout<<"Visited Affect"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitOr(ProgParser::OrContext *ctx) override {
        std::cout<<"Visited Ou"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::OR,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *ctx) override {
        std::cout<<"Visited Diff"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::DIFF,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitNo(ProgParser::NoContext *ctx) override {
        std::cout<<"Visited Non"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *ctx) override {
        std::cout<<"Visited Plus"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::PLUS,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitSup(ProgParser::SupContext *ctx) override {
        std::cout<<"Visited Sup"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::SUP,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitAnd(ProgParser::AndContext *ctx) override {
        std::cout<<"Visited Et"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::AND,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitInv(ProgParser::InvContext *ctx) override {
        std::cout<<"Visited Inv"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDiv(ProgParser::DivContext *ctx) override {
        std::cout<<"Visited Div"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::DIV,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitCallfunction(ProgParser::CallfunctionContext *ctx) override {
        std::cout<<"Visited CallFunction"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPredecr(ProgParser::PredecrContext *ctx) override {
        std::cout<<"Visited Predecr"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPreincr(ProgParser::PreincrContext *ctx) override {
        std::cout<<"Visited Preincr"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPostdecr(ProgParser::PostdecrContext *ctx) override {
        std::cout<<"Visited Postdecr"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSupegal(ProgParser::SupegalContext *ctx) override {
        std::cout<<"Visited Supegal"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::SUPEGAL,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitMinus(ProgParser::MinusContext *ctx) override {
        std::cout<<"Visited Moins"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MINUS,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *ctx) override {
        std::cout<<"Visited Postincr"<<std::endl;
        //TODO: Get variable from ctx->name()
//        ProgParser::ExprContext* child = ctx->name();
//
//        Expr *expr1 = (Expr*)(child.at(0));
//        Expr *expr2 = (Expr*)(child.at(1));
//        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::DIV,expr2);
//        exprBin->print();
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *ctx) override {
        std::cout<<"Visited Modulo"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::MODULO,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }

    virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *ctx) override {
        std::cout<<"Visited Infegal"<<std::endl;
        std::vector<ProgParser::ExprContext*> child = ctx->expr();

        Expr *expr1 = (Expr*)(visit(child.at(0)));
        Expr *expr2 = (Expr*)(visit(child.at(1)));
        ExprBin *exprBin = new ExprBin(expr1,ExprBinType::INFEGAL,expr2);
        exprBin->print();
        return (Expr*)exprBin;
    }


};

