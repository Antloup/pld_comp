#pragma once
#include "Expr.h"

using namespace std;
class ExprConst : public Expr
{
public :
    ExprConst(int constant);
    ~ExprConst();

    int getConstant();
    void print();
    string buildIR(CFG *cfg);

protected :
    int constant;
};

