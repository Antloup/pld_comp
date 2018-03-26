#include <iostream>
#include "ExprBin.h"



ExprBin::ExprBin(Expr *expr1, ExprBinType::ExprBinType type, Expr *expr2)
        : Expr(), expr1(expr1),type(type),expr2(expr2)
{

}


ExprBin::~ExprBin()
{
}

void ExprBin::print()
{
    std::cout<<"Binary Expression : Type : "<<type<<std::endl;
    std::cout<<"Expr 1 :";
    expr1->print();
    std::cout<<"Expr 2 :";
    expr2->print();
}

