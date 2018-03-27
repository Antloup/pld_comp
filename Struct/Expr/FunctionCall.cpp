#include <iostream>
#include "FunctionCall.h"



FunctionCall::FunctionCall(Function* function) : Expr(), function(function)
{
}


FunctionCall::~FunctionCall()
{
}

void FunctionCall::print()
{
    std::cout<<"Function Call"<<std::endl;
}

void FunctionCall::addParam(Expr *expr)
{
    exprs.push_back(expr);
}
