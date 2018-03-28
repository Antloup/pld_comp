#include "Instr.h"
#include "../Expr/Expr.h"


Instr::Instr(Expr *expr) : expr(expr)
{
}


Instr::~Instr()
{
}

void Instr::setParentBlock(Block *b)
{
    parentBlock = b;
}

string Instr::buildIR(CFG *cfg) {
    return expr->buildIR(cfg);
}

Block* Instr::getParentBlock(){
    return parentBlock;
}
