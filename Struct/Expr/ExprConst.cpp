#include <iostream>
#include "ExprConst.h"
#include "../IR.h"

using namespace std;

ExprConst::ExprConst(int constant) : Expr(), constant(constant)
{}

int ExprConst::getConstant()
{
    return constant;
}

void ExprConst::print()
{
    std::cout<<"Constante : "<<constant<<std::endl;
}

ExprConst::~ExprConst()
{

}

string ExprConst::buildIR(CFG *cfg) {
    vector<string> params;
    string tmp = cfg->create_new_tempvar();
    params.push_back(tmp);
    params.push_back(to_string(this->constant));
    cfg->current_bb->add_IRInstr(IRInstr::ldconst, params);
    return tmp;
}
