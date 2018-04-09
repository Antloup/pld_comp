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
    Prog();
    ~Prog();

    /* Table method */
    void printVarTable();

    void printFunctionTable();

    void refreshTableName(Block* currentBlock);

    void addVar(Block *b, Var* var);

    Var* getVar(Block* b,std::string varName);

    void addFunction(std::string name,Function* f);

    Function* getFunction(std::string name);

    virtual antlrcpp::Any visitProgram(ProgParser::ProgramContext *ctx);

    virtual antlrcpp::Any visitGlobalVar(ProgParser::GlobalVarContext *ctx);

    virtual antlrcpp::Any visitFunction(ProgParser::FunctionContext *ctx);

    virtual antlrcpp::Any visitBlock(ProgParser::BlockContext *ctx);

    virtual antlrcpp::Any visitDeclare(ProgParser::DeclareContext *ctx);

    virtual antlrcpp:: Any visitInstruction(ProgParser::InstructionContext *ctx);

    virtual antlrcpp::Any visitReturnStatement(ProgParser::ReturnStatementContext *ctx);

    virtual antlrcpp::Any visitIfStatement(ProgParser::IfStatementContext *ctx);

    virtual antlrcpp::Any visitElseStatement(ProgParser::ElseStatementContext *ctx);

    virtual antlrcpp::Any visitWhileStatement(ProgParser::WhileStatementContext *ctx);

    virtual antlrcpp::Any visitType(ProgParser::TypeContext *ctx);

    virtual antlrcpp::Any visitSigType(ProgParser::SigTypeContext *ctx);

    virtual antlrcpp::Any visitRetType(ProgParser::RetTypeContext *ctx);

    virtual antlrcpp::Any visitSigParams(ProgParser::SigParamsContext *ctx);

    virtual antlrcpp::Any visitSigDeclare(ProgParser::SigDeclareContext *ctx);

    virtual antlrcpp::Any visitParams(ProgParser::ParamsContext *ctx);

    virtual antlrcpp::Any visitVariable(ProgParser::VariableContext *ctx);

    virtual antlrcpp::Any visitConst(ProgParser::ConstContext *ctx);

    virtual antlrcpp::Any visitConstant(ProgParser::ConstantContext *ctx);

    virtual antlrcpp::Any visitName(ProgParser::NameContext *ctx);

    virtual antlrcpp::Any visitPar(ProgParser::ParContext *ctx);

    virtual antlrcpp::Any visitInf(ProgParser::InfContext *ctx);

    virtual antlrcpp::Any visitEgal(ProgParser::EgalContext *ctx);

    virtual antlrcpp::Any visitMult(ProgParser::MultContext *ctx);

    virtual antlrcpp::Any visitAffect(ProgParser::AffectContext *ctx);

    virtual antlrcpp::Any visitOr(ProgParser::OrContext *ctx);

    virtual antlrcpp::Any visitDiff(ProgParser::DiffContext *ctx);

    virtual antlrcpp::Any visitNo(ProgParser::NoContext *ctx);

    virtual antlrcpp::Any visitPlus(ProgParser::PlusContext *ctx);

    virtual antlrcpp::Any visitSup(ProgParser::SupContext *ctx);

    virtual antlrcpp::Any visitAnd(ProgParser::AndContext *ctx);

    virtual antlrcpp::Any visitInv(ProgParser::InvContext *ctx);

    virtual antlrcpp::Any visitDiv(ProgParser::DivContext *ctx);

    virtual antlrcpp::Any visitCallfunction(ProgParser::CallfunctionContext *ctx);

    virtual antlrcpp::Any visitPredecr(ProgParser::PredecrContext *ctx);

    virtual antlrcpp::Any visitPostdecr(ProgParser::PostdecrContext *ctx);

    virtual antlrcpp::Any visitSupegal(ProgParser::SupegalContext *ctx);

    virtual antlrcpp::Any visitMinus(ProgParser::MinusContext *ctx);

    virtual antlrcpp::Any visitPostincr(ProgParser::PostincrContext *ctx);

    virtual antlrcpp::Any visitPreincr(ProgParser::PreincrContext *ctx);

    virtual antlrcpp::Any visitModulo(ProgParser::ModuloContext *ctx);

    virtual antlrcpp::Any visitInfegal(ProgParser::InfegalContext *ctx);

};

