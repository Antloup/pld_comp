
// Generated from Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ProgVisitor.h"


/**
 * This class provides an empty implementation of ProgVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ProgBaseVisitor : public ProgVisitor {
public:

  virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockFunction(ProgParser::BlockFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(ProgParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(ProgParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetType(ProgParser::RetTypeContext *ctx) override {
    return visitChildren(ctx);
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

  virtual antlrcpp::Any visitVal(ProgParser::ValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(ProgParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ProgParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInf(ProgParser::InfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(ProgParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValeur(ProgParser::ValeurContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOu(ProgParser::OuContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon(ProgParser::NonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSup(ProgParser::SupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEt(ProgParser::EtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInv(ProgParser::InvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(ProgParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallfunction(ProgParser::CallfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredecr(ProgParser::PredecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreincr(ProgParser::PreincrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostdecr(ProgParser::PostdecrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupegal(ProgParser::SupegalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoins(ProgParser::MoinsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *ctx) override {
    return visitChildren(ctx);
  }


};

