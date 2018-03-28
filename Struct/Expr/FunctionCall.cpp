#include <iostream>
#include "FunctionCall.h"
#include "../../Tools/PrintTool.h"


FunctionCall::FunctionCall(Function* function) : Expr(), function(function)
{
}


FunctionCall::~FunctionCall()
{
}

void FunctionCall::print(int tabs)
{
    cout<<"Function Call :"<<endl;
    string stab = PrintTool::getTabs(tabs);
    cout << stab <<"Function : " <<function << endl;
    cout << stab <<"Exprs : " <<endl;
    for(auto i : exprs){
        i->print(tabs+1);
    }
}

void FunctionCall::addParam(Expr *expr)
{
    exprs.push_back(expr);
}

string FunctionCall::buildIR(CFG *cfg) {

}
