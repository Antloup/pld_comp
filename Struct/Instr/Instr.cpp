#include "Instr.h"



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

void Instr::buildIR(CFG *cfg) {

}

Block* Instr::getParentBlock(){
    return parentBlock;
}