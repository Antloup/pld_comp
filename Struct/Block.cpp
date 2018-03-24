#include "Block.h"



Block::Block()
{
}


Block::~Block()
{
}

void Block::addDeclare(Var *d) {
    declares.push_back(d);
}

void Block::addInstruction(Instr *i) {
    instrs.push_back(i);
    instrs.back()->addBlock(this);
}
