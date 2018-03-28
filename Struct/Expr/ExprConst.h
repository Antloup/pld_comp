#pragma once
#include "Expr.h"

class ExprConst : public Expr
{
public :
    ExprConst(int constant);
    ~ExprConst();

    int getConstant();
    void print();
    void buildIR(CFG *cfg);

protected :
    int constant;
};

