#include "ExprVar.h"



ExprVar::ExprVar(Var *var) : var(var)
{}



ExprVar::~ExprVar()
{
}

void ExprVar::print()
{
    var->print();
}



