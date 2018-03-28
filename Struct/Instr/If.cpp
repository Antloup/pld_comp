#include "If.h"



If::If(Expr* e, Block* ifBlock,Block* elseBlock) : Instr(e), childIf(ifBlock), childElse(elseBlock)
{
}


If::~If()
{
}

void If::buildIR(CFG *cfg) {
    // todo : compléter cette fonction (générale)
    // ici expr est le test du if
    expr->buildIR(cfg);
    BasicBlock* exprBB = cfg->current_bb;
    // todo : faire en sorte que thenBB et elseBB correspondent bien à leur code
    BasicBlock* thenBB = new BasicBlock(cfg,"trueCode"/*, trueCode*/);
    BasicBlock* elseBB = new BasicBlock(cfg,"falseCode"/*, trueCode*/);
    BasicBlock* afterIfBB = new BasicBlock(cfg,"afterIf");
    afterIfBB->exit_true = exprBB->exit_true;
    afterIfBB->exit_false = exprBB->exit_false;
    exprBB->exit_true = thenBB;
    exprBB->exit_false = elseBB;
    thenBB->exit_true = afterIfBB;
    thenBB->exit_false = nullptr;
    elseBB->exit_true = afterIfBB;
    elseBB->exit_false = nullptr;
    cfg->add_bb(thenBB);
    this->childIf->buildIR(cfg);
    cfg->add_bb(elseBB);
    if (childElse) {
        this->childElse->buildIR(cfg);
    }
    cfg->add_bb(afterIfBB);
}
