#include <iostream>
#include "ExprBin.h"
#include "../IR.h"


ExprBin::ExprBin(Expr *exprLeft, ExprBinType::ExprBinType type, Expr *exprRight)
        : Expr(), exprLeft(exprLeft),type(type),exprRight(exprRight)
{

}


ExprBin::~ExprBin()
{
}

void ExprBin::print()
{
    std::cout<<"Binary Expression : Type : "<<type<<std::endl;
    std::cout<<"Expr 1 :";
    exprLeft->print();
    std::cout<<"Expr 2 :";
    exprRight->print();
}

string ExprBin::buildIR(CFG *cfg) {
    vector<string> params;
    string val = cfg->create_new_tempvar();
    string right = exprRight->buildIR(cfg);
    string left = exprLeft->buildIR(cfg);
    params.push_back(val);
    params.push_back(left);
    params.push_back(right);
    switch(type){
        case ExprBinType::MULT:
            cfg->current_bb->add_IRInstr(IRInstr::mul, params);
            break;
        case ExprBinType::PLUS:
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        case ExprBinType::MINUS:
            cfg->current_bb->add_IRInstr(IRInstr::sub, params);

            break;
        default:
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        //todo : complete switch
    }
    return val;
}

