#pragma once


#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Expr : public ExprBaseVisitor {
public:

  virtual antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInf(ExprParser::InfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValeur(ExprParser::ValeurContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffect(ExprParser::AffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiff(ExprParser::DiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon(ExprParser::NonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(ExprParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSup(ExprParser::SupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEt(ExprParser::EtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInv(ExprParser::InvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(ExprParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallfunction(ExprParser::CallfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredecr(ExprParser::PredecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreincr(ExprParser::PreincrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostdecr(ExprParser::PostdecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupegal(ExprParser::SupegalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoins(ExprParser::MoinsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostincr(ExprParser::PostincrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModulo(ExprParser::ModuloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfegal(ExprParser::InfegalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalVar(ExprParser::GlobalVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(ExprParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockFunction(ExprParser::BlockFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(ExprParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(ExprParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(ExprParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(ExprParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(ExprParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(ExprParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare(ExprParser::DeclareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(ExprParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigType(ExprParser::SigTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetType(ExprParser::RetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigParams(ExprParser::SigParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigDeclare(ExprParser::SigDeclareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams(ExprParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVal(ExprParser::ValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(ExprParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }


};

