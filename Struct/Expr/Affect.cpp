#include <iostream>
#include "Affect.h"
#include "../IR.h"
#include "../../Tools/PrintTool.h"


Affect::Affect(Var *var, Expr *expr, Block *block) : Expr(), var(var), expr(expr)
{
    this->parentBlock = block;
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

string Affect::buildIR(CFG* cfg, bool isComparedToZero) {
    vector<string> params;
//    string dest = to_string(-var->getAddr())+"(%rbp)";
    string dest = var->getName();
    string source = expr->buildIR(cfg);
    params.push_back(dest);
    params.push_back(source);
    cfg->current_bb->add_IRInstr(IRInstr::copy, params,isComparedToZero);

    return dest;

}
