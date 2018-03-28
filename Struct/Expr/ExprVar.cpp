#include "ExprVar.h"
#include "../IR.h"


ExprVar::ExprVar(Var *var) : Expr(), var(var)
{}



ExprVar::~ExprVar()
{
}

void ExprVar::print()
{
    var->print();
}

string ExprVar::buildIR(CFG *cfg) {
    return var->getName();
}



