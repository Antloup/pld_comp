#include <iostream>
#include "Affect.h"



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

void Affect::buildIR() {
    // todo : compléter cette fonction

}
