
// Generated from Prog.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ProgParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ProgParser.
 */
class  ProgVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ProgParser.
   */
    virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *context) = 0;

    virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitBlockFunction(ProgParser::BlockFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(ProgParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *context) = 0;

    virtual antlrcpp::Any visitType(ProgParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *context) = 0;

    virtual antlrcpp::Any visitRetType(ProgParser::RetTypeContext *context) = 0;

    virtual antlrcpp::Any visitSigParams(ProgParser::SigParamsContext *context) = 0;

    virtual antlrcpp::Any visitSigDeclare(ProgParser::SigDeclareContext *context) = 0;

    virtual antlrcpp::Any visitParams(ProgParser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitConstant(ProgParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitName(ProgParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitPar(ProgParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitInf(ProgParser::InfContext *context) = 0;

    virtual antlrcpp::Any visitNo(ProgParser::NoContext *context) = 0;

    virtual antlrcpp::Any visitMinus(ProgParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *context) = 0;

    virtual antlrcpp::Any visitMult(ProgParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitOr(ProgParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitConst(ProgParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *context) = 0;

    virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitSup(ProgParser::SupContext *context) = 0;

    virtual antlrcpp::Any visitInv(ProgParser::InvContext *context) = 0;

    virtual antlrcpp::Any visitDiv(ProgParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitCallfunction(ProgParser::CallfunctionContext *context) = 0;

    virtual antlrcpp::Any visitPredecr(ProgParser::PredecrContext *context) = 0;

    virtual antlrcpp::Any visitPreincr(ProgParser::PreincrContext *context) = 0;

    virtual antlrcpp::Any visitPostdecr(ProgParser::PostdecrContext *context) = 0;

    virtual antlrcpp::Any visitSupegal(ProgParser::SupegalContext *context) = 0;

    virtual antlrcpp::Any visitAnd(ProgParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ProgParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *context) = 0;

    virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *context) = 0;

    virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *context) = 0;


};

