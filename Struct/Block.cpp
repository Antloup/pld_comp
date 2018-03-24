#include "Block.h"



Block::Block()
{
}


Block::~Block()
{
}

void Block::addDeclare(Declare *d) {
    declares.push_back(d);
}

void Block::addInstruction(Instr *i) {
    instrs.push_back(i);
}
