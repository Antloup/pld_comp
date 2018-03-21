#pragma once


#include "antlr4-runtime.h"
#include "ProgBaseVisitor.h"
#include "../Struct/Program.h"

/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Prog : public ProgBaseVisitor {
public:

    virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *ctx) override {
        std::cout<<"Visited Program"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *ctx) override {
        std::cout<<"Visited GlobalVar"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *ctx) override {
        std::cout<<"Visited Function"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitBlockFunction(ProgParser::BlockFunctionContext *ctx) override {
        std::cout<<"Visited Block Function"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInstruction(ProgParser::InstructionContext *ctx) override {
        std::cout<<"Visited Instruction"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *ctx) override {
        std::cout<<"Visited ReturnStatement"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *ctx) override {
        std::cout<<"Visited IfStatement"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *ctx) override {
        std::cout<<"Visited ElseStatement"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *ctx) override {
        std::cout<<"Visited WhileStatement"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *ctx) override {
        std::cout<<"Visited Block"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *ctx) override {
        std::cout<<"Visited Declare"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitType(ProgParser::TypeContext *ctx) override {
        std::cout<<"Visited Type"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *ctx) override {
        std::cout<<"Visited SigType"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitRetType(ProgParser::RetTypeContext *ctx) override {
        std::cout<<"Visited RetType"<<std::endl;
        return visitChildren(ctx);
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

    virtual antlrcpp::Any visitVal(ProgParser::ValContext *ctx) override {
        std::cout<<"Visited Val"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitName(ProgParser::NameContext *ctx) override {
        std::cout<<"Visited Name"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPar(ProgParser::ParContext *ctx) override {
        std::cout<<"Visited Par"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInf(ProgParser::InfContext *ctx) override {
        std::cout<<"Visited inf"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *ctx) override {
        std::cout<<"Visited Egal"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMult(ProgParser::MultContext *ctx) override {
        std::cout<<"Visited Mult"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitValue(ProgParser::ValueContext *ctx) override {
        std::cout<<"Visited Valeur"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *ctx) override {
        std::cout<<"Visited Affect"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitOr(ProgParser::OrContext *ctx) override {
        std::cout<<"Visited Ou"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *ctx) override {
        std::cout<<"Visited Diff"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitNo(ProgParser::NoContext *ctx) override {
        std::cout<<"Visited Non"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *ctx) override {
        std::cout<<"Visited Plus"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSup(ProgParser::SupContext *ctx) override {
        std::cout<<"Visited Sup"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAnd(ProgParser::AndContext *ctx) override {
        std::cout<<"Visited Et"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInv(ProgParser::InvContext *ctx) override {
        std::cout<<"Visited Inv"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDiv(ProgParser::DivContext *ctx) override {
        std::cout<<"Visited Div"<<std::endl;
        return visitChildren(ctx);
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
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMinus(ProgParser::MinusContext *ctx) override {
        std::cout<<"Visited Moins"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *ctx) override {
        std::cout<<"Visited Postincr"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *ctx) override {
        std::cout<<"Visited Modulo"<<std::endl;
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *ctx) override {
        std::cout<<"Visited Infegal"<<std::endl;
        return visitChildren(ctx);
    }


};

