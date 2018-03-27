#include "Instr.h"



Instr::Instr(Expr *expr) : expr(expr)
{
}


Instr::~Instr()
{
}

void Instr::addBlock(Block *b) {
    parentBlock = b;
}

void Instr::buildIR(CFG *cfg) {

}
