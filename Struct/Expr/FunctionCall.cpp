#include <iostream>
#include "FunctionCall.h"
#include "../../Tools/PrintTool.h"
#include "../IR.h"

FunctionCall::FunctionCall(Function* function, Block *block)
        : Expr(), function(function)
{
    this->parentBlock = block;
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

string FunctionCall::buildIR(CFG *cfg, bool isComparedToZero) {
    vector<string> params;
    string val = "";
    val = cfg->create_new_tempvar();


//    if(function->getretType() == RetType::VOID){
//        val = cfg->create_new_tempvar();
//    }
//    else{
//        //todo : var destination retour ?
//    }

    params.push_back(val); // destination
    params.push_back(function->getName()); // function label
    for(auto i : exprs){
        params.push_back(i->buildIR(cfg)); // op
    }
    cfg->current_bb->add_IRInstr(IRInstr::call, params,isComparedToZero);
    return val;
}
