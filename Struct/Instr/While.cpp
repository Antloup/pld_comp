#include "While.h"



While::While(Expr* e,Block* b): Instr(e), child(b)
{
}


While::~While()
{
}

void While::setProgram(Program *p) {
    child->setProgram(p);
}
