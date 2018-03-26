#pragma once
#include "Expr.h"

class ExprConst : public Expr
{
public :
    ExprConst(int constant);
    ~ExprConst();

    int getConstant();
    void print();
protected :
    int constant;
};

