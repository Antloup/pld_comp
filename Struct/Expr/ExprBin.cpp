#include <iostream>
#include "ExprBin.h"
#include "../IR.h"


ExprBin::ExprBin(Expr *exprLeft, ExprBinType::ExprBinType type, Expr *exprRight)
        : Expr(), exprLeft(exprLeft),type(type),exprRight(exprRight)
{

}


ExprBin::~ExprBin()
{
}

void ExprBin::print()
{
    std::cout<<"Binary Expression : Type : "<<type<<std::endl;
    std::cout<<"Expr 1 :";
    exprLeft->print();
    std::cout<<"Expr 2 :";
    exprRight->print();
}

void ExprBin::buildIR(CFG *cfg) {
    exprRight->buildIR(cfg);
    exprLeft->buildIR(cfg);
}

