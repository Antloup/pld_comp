#include "While.h"



While::While(Expr* e,Block* b): condition(e), child(b)
{
}


While::~While()
{
}

void While::setProgram(Program *p) {
    child->setProgram(p);
}
