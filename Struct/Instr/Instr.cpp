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

Block* Instr::getParentBlock(){
    return parentBlock;
}