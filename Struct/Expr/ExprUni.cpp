#include <iostream>
#include "ExprUni.h"
#include "../IR.h"


ExprUni::ExprUni(Expr* expr, ExprUniType::ExprUniType type)
        : Expr(), expr(expr), type(type)
{}


ExprUni::~ExprUni()
{
}

void ExprUni::print()
{
    std::cout<<"Unary Expression : Type :"<<type<<std::endl;
    expr->print();
}

string ExprUni::buildIR(CFG *cfg) {
    vector<string> params;
    string val = cfg->create_new_tempvar();
    params.push_back(val);
    switch(type){
        case ExprUniType::NO:
            cfg->current_bb->add_IRInstr(IRInstr::no, params);
            break;
        default:
            cfg->current_bb->add_IRInstr(IRInstr::no, params);
            break;
            //todo : complete switch
    }
    return val;
}
