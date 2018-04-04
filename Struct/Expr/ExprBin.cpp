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
    cout << stab <<"Type : "<<getType(type)<<endl;
    cout << stab <<"Expr 1 :" << endl;
    exprLeft->print(tabs+1);
    cout << stab <<"Expr 2 :"<<endl;
    exprRight->print(tabs+1);
}

string ExprBin::buildIR(CFG *cfg, bool isComparedToZero) {
    vector<string> params;
    string val = cfg->create_new_tempvar();
    string right = exprRight->buildIR(cfg);
    string left = exprLeft->buildIR(cfg);
    params.push_back(val);
    params.push_back(left);
    params.push_back(right);
    switch(type){
        case ExprBinType::MULT:
            cfg->current_bb->add_IRInstr(IRInstr::mul, params,isComparedToZero);
            break;
        case ExprBinType::PLUS:
            cfg->current_bb->add_IRInstr(IRInstr::add, params,isComparedToZero);
            break;
        case ExprBinType::MINUS:
            cfg->current_bb->add_IRInstr(IRInstr::sub, params,isComparedToZero);
            break;
        case ExprBinType::AND:
            cfg->current_bb->add_IRInstr(IRInstr::and_op, params,isComparedToZero);
            break;
        case ExprBinType::OR:
            cfg->current_bb->add_IRInstr(IRInstr::or_op, params,isComparedToZero);
            break;
        case ExprBinType::EGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_eq, params,isComparedToZero);
            break;
        case ExprBinType::DIV:
            cfg->current_bb->add_IRInstr(IRInstr::div, params,isComparedToZero);
            break;
        case ExprBinType::INF:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_lt, params,isComparedToZero);
            break;
        case ExprBinType::INFEGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_le, params,isComparedToZero);
            break;
        case ExprBinType::SUPEGAL:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_ge, params,isComparedToZero);
            break;
        case ExprBinType::SUP:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_gt, params,isComparedToZero);
            break;
        case ExprBinType::MODULO:
            cfg->current_bb->add_IRInstr(IRInstr::modulo, params,isComparedToZero);
            break;
        case ExprBinType::DIFF:
            cfg->current_bb->add_IRInstr(IRInstr::cmp_neq, params,isComparedToZero);
            break;
        default:
            cfg->current_bb->add_IRInstr(IRInstr::unk, params,isComparedToZero);
            break;
    }
    return val;
}

string ExprBin::getType(int type) {
    switch(type){
        case ExprBinType::MODULO:
            return "%";
        case ExprBinType::SUPEGAL:
            return ">=";
        case ExprBinType::SUP:
            return ">";
        case ExprBinType::INFEGAL:
            return "<=";
        case ExprBinType::INF:
            return "<";
        case ExprBinType::DIFF:
            return "!=";
        case ExprBinType::EGAL:
            return "==";
        case ExprBinType::AND:
            return "&&";
        case ExprBinType::PLUS:
            return "+";
        case ExprBinType::MULT:
            return "*";
        case ExprBinType::DIV:
            return "/";
        case ExprBinType::MINUS:
            return "-";
        case ExprBinType::OR:
            return "||";
    }
    return "unk";
}

