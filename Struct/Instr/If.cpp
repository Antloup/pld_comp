#include "If.h"



If::If(Expr* e, Block* ifBlock,Block* elseBlock) : Instr(e), childIf(ifBlock), childElse(elseBlock)
{
}


If::~If()
{
}
