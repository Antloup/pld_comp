#include "Instr.h"



Instr::Instr()
{
}


Instr::~Instr()
{
}

void Instr::addBlock(Block *b) {
    parentBlock = b;
}
