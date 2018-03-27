#include "Block.h"
#include "Instr/If.h"


Block::Block()
{
}


Block::~Block()
{
}

void Block::addDeclare(Var *d) {
    declares.push_back(d);
    //TODO : push it to prog VarName
    //TODO : get progVarName from parentBlock and push them
}

void Block::addInstruction(Instr *i) {
    instrs.push_back(i);
    instrs.back()->addBlock(this);
}
