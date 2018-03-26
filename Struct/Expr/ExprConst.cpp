#include <iostream>
#include "ExprConst.h"

ExprConst::ExprConst(int constant) : constant(constant)
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
