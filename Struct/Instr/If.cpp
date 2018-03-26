#include "If.h"



If::If(Expr* e, Block* ifBlock,Block* elseBlock) : Instr(e), childIf(ifBlock), childElse(elseBlock)
{
}


If::~If()
{
}

void If::setProgram(Program *p) {
    if(childIf){
        childIf->setProgram(p);
    }
    if(childElse){
        childElse->setProgram(p);
    }
}
