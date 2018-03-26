#include "ExprVar.h"



ExprVar::ExprVar(Var *var) : Expr(), var(var)
{}



ExprVar::~ExprVar()
{
}

void ExprVar::print()
{
    var->print();
}



