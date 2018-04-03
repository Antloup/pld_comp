#include "ExprVar.h"
#include "../IR.h"


ExprVar::ExprVar(Var *var, Block *block) :
        Expr(), var(var)
{
    this->parentBlock = block;
}



ExprVar::~ExprVar()
{
}

void ExprVar::print(int tabs)
{
    var->print(tabs+1);
}

string ExprVar::buildIR(CFG *cfg) {
    string addr = to_string(-var->getAddr())+"(%rbp)";
    return addr;
}



