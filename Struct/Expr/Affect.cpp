#include <iostream>
#include "Affect.h"
#include "ExprBin.h"
#include "../IR.h"


Affect::Affect(Var *var, Expr *expr) : Expr(), var(var), expr(expr)
{
}


Affect::~Affect()
{
}

void Affect::print()
{
    std::cout<<"Affectation"<<std::endl;
}

string Affect::buildIR(CFG* cfg) {
    vector<string> params;
    string dest = var->getName();
    string source = expr->buildIR(cfg);
    params.push_back(dest);
    params.push_back(source);
    cfg->current_bb->add_IRInstr(IRInstr::copy, params);

    return dest;

}
