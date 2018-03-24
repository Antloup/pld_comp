#include "Instr.h"



Instr::Instr(Expr* e) : expr(e)
{
}


Instr::~Instr()
{
}

void Instr::addBlock(Block *b) {
    parentBlock = b;
}
