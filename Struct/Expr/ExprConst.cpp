#include <iostream>
#include "ExprConst.h"

ExprConst::ExprConst(int constant) : Expr(), constant(constant)
{}

int ExprConst::getConstant()
{
    return constant;
}

void ExprConst::print()
{
    std::cout<<"Constante : "<<constant<<std::endl;
}

ExprConst::~ExprConst()
{

}

void ExprConst::buildIR(CFG *cfg) {
}
