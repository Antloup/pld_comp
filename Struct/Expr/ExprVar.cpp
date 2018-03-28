#include "ExprVar.h"
#include "../IR.h"


ExprVar::ExprVar(Var *var) : Expr(), var(var)
{}



ExprVar::~ExprVar()
{
}

void ExprVar::print(int tabs)
{
    var->print(tabs+1);
}

string ExprVar::buildIR(CFG *cfg) {
    return var->getName();
}



