#include <iostream>
#include "ExprConst.h"
#include "../IR.h"
#include "../../Tools/PrintTool.h"

using namespace std;

ExprConst::ExprConst(int constant, Block *block) : Expr(), constant(constant)
{
    this->parentBlock = block;
}

int ExprConst::getConstant()
{
    return constant;
}

void ExprConst::print(int tabs)
{
    string stab = PrintTool::getTabs(tabs);
    std::cout<< stab <<"Constante : "<<constant<<std::endl;
}

ExprConst::~ExprConst()
{

}

string ExprConst::buildIR(CFG *cfg, bool isComparedToZero) {
    vector<string> params;
    string tmp = cfg->create_new_tempvar();
    params.push_back(to_string(this->constant));
    params.push_back(tmp);
    cfg->current_bb->add_IRInstr(IRInstr::ldconst, params,isComparedToZero);
    return tmp;
}
