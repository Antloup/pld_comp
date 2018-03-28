#include <iostream>
#include "Affect.h"
#include "ExprBin.h"
#include "../IR.h"
#include "../../Tools/PrintTool.h"


Affect::Affect(Var *var, Expr *expr) : Expr(), var(var), expr(expr)
{
}


Affect::~Affect()
{
}

void Affect::print(int tabs)
{
    string stab = PrintTool::getTabs(tabs);
    cout<< stab <<"Affectation :"<<endl;
    var->print(tabs+1);
    cout << stab <<"Expr :" << endl;
    expr->print(tabs+1);
    cout << endl;
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
