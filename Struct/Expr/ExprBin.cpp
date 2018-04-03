#include <iostream>
#include "ExprBin.h"
#include "../IR.h"
#include "../../Tools/PrintTool.h"


ExprBin::ExprBin(Expr *exprLeft, ExprBinType::ExprBinType type, Expr *exprRight, Block *block)
        : Expr(), exprLeft(exprLeft),type(type),exprRight(exprRight)
{
    this->parentBlock = block;
}


ExprBin::~ExprBin()
{
}

void ExprBin::print(int tabs)
{
    string stab = PrintTool::getTabs(tabs);
    cout << stab << "Binary Expression :" << endl;
    cout << stab <<"Type : "<<type<<endl;
    cout << stab <<"Expr 1 :" << endl;
    exprLeft->print(tabs+1);
    cout << stab <<"Expr 2 :"<<endl;
    exprRight->print(tabs+1);
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

