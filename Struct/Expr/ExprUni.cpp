#include <iostream>
#include "ExprUni.h"



ExprUni::ExprUni(Expr* expr, ExprUniType::ExprUniType type)
        : expr(expr), type(type)
{}


ExprUni::~ExprUni()
{
}

void ExprUni::print()
{
    std::cout<<"Unary Expression : Type :"<<type<<std::endl;
    expr->print();
}
