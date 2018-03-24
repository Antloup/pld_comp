#include "While.h"



While::While(Expr* e,Block* b): Instr(e), child(b)
{
}


While::~While()
{
}
