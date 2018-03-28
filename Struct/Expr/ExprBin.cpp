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
        case ExprBinType::AND:
            cfg->current_bb->add_IRInstr(IRInstr::and_op, params);
            break;
        case ExprBinType::OR:
            cfg->current_bb->add_IRInstr(IRInstr::or_op, params);
            break;
        case ExprBinType::EGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_eq, params);
            break;
        case ExprBinType::DIV:
            cfg->current_bb->add_IRInstr(IRInstr::div, params);
            break;
        case ExprBinType::INF:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_lt, params);
            break;
        case ExprBinType::INFEGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_le, params);
            break;
        case ExprBinType::SUPEGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_ge, params);
            break;
        case ExprBinType::SUP:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_gt, params);
            break;
        case ExprBinType::MODULO:
            cfg->current_bb->add_IRInstr(IRInstr::div, params);
            break;
        case ExprBinType::DIFF:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_neq, params);
            break;
        default:
            cfg->current_bb->add_IRInstr(IRInstr::unk, params);
            break;
    }
    return val;
}

