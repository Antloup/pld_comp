#pragma once
#include "Expr.h"

using namespace std;
class ExprConst : public Expr
{
public :
    ExprConst(int constant, Block *block);
    ~ExprConst();

    int getConstant();
    void print(int tabs=0);
    string buildIR(CFG *cfg, bool isComparedToZero = false);

protected :
    int constant;
};

