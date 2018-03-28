#include <iostream>
#include "ExprUni.h"
#include "../IR.h"
#include "../../Tools/PrintTool.h"


ExprUni::ExprUni(Expr* expr, ExprUniType::ExprUniType type)
        : Expr(), expr(expr), type(type)
{}


ExprUni::~ExprUni()
{
}

void ExprUni::print(int tabs)
{
    string stab = PrintTool::getTabs(tabs);
    std::cout<< stab <<"Unary Expression :"<<endl;
    cout << stab <<"Type :"<<type<<std::endl;
    expr->print(tabs+1);
}

string ExprUni::buildIR(CFG *cfg) {
    vector<string> params;
    string val = expr->buildIR(cfg);
    params.push_back(val);
    switch(type){
        // todo: nb : pas de diff entre post et pre
        case ExprUniType::NO:
            cfg->current_bb->add_IRInstr(IRInstr::no, params);
            break;
        case ExprUniType::PREINCR:
            params.push_back(to_string(1));
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        case ExprUniType::POSTINCR:
            params.push_back(to_string(1));
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        case ExprUniType::POSTDECR:
            params.push_back(to_string(-1));
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        case ExprUniType::PREDECR:
            params.push_back(to_string(-1));
            cfg->current_bb->add_IRInstr(IRInstr::add, params);
            break;
        case ExprUniType::INV:
            //Todo : a voir...
            params.push_back(to_string(0));
            cfg->current_bb->add_IRInstr(IRInstr::sub, params);
            break;
        default:
            cfg->current_bb->add_IRInstr(IRInstr::unk, params);
            break;
    }
    return val;
}
