
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitPar(ExprParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitInf(ExprParser::InfContext *context) = 0;

    virtual antlrcpp::Any visitEgal(ExprParser::EgalContext *context) = 0;

    virtual antlrcpp::Any visitMult(ExprParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitValeur(ExprParser::ValeurContext *context) = 0;

    virtual antlrcpp::Any visitAffect(ExprParser::AffectContext *context) = 0;

    virtual antlrcpp::Any visitOu(ExprParser::OuContext *context) = 0;

    virtual antlrcpp::Any visitDiff(ExprParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitNon(ExprParser::NonContext *context) = 0;

    virtual antlrcpp::Any visitPlus(ExprParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitSup(ExprParser::SupContext *context) = 0;

    virtual antlrcpp::Any visitEt(ExprParser::EtContext *context) = 0;

    virtual antlrcpp::Any visitInv(ExprParser::InvContext *context) = 0;

    virtual antlrcpp::Any visitDiv(ExprParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitCallfunction(ExprParser::CallfunctionContext *context) = 0;

    virtual antlrcpp::Any visitPredecr(ExprParser::PredecrContext *context) = 0;

    virtual antlrcpp::Any visitPreincr(ExprParser::PreincrContext *context) = 0;

    virtual antlrcpp::Any visitPostdecr(ExprParser::PostdecrContext *context) = 0;

    virtual antlrcpp::Any visitSupegal(ExprParser::SupegalContext *context) = 0;

    virtual antlrcpp::Any visitMoins(ExprParser::MoinsContext *context) = 0;

    virtual antlrcpp::Any visitPostincr(ExprParser::PostincrContext *context) = 0;

    virtual antlrcpp::Any visitModulo(ExprParser::ModuloContext *context) = 0;

    virtual antlrcpp::Any visitInfegal(ExprParser::InfegalContext *context) = 0;

    virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitGlobalVar(ExprParser::GlobalVarContext *context) = 0;

    virtual antlrcpp::Any visitFunction(ExprParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitBlockFunction(ExprParser::BlockFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(ExprParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(ExprParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(ExprParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(ExprParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(ExprParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ExprParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclare(ExprParser::DeclareContext *context) = 0;

    virtual antlrcpp::Any visitType(ExprParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitSigType(ExprParser::SigTypeContext *context) = 0;

    virtual antlrcpp::Any visitRetType(ExprParser::RetTypeContext *context) = 0;

    virtual antlrcpp::Any visitSigParams(ExprParser::SigParamsContext *context) = 0;

    virtual antlrcpp::Any visitSigDeclare(ExprParser::SigDeclareContext *context) = 0;

    virtual antlrcpp::Any visitParams(ExprParser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitVal(ExprParser::ValContext *context) = 0;

    virtual antlrcpp::Any visitName(ExprParser::NameContext *context) = 0;


};

