#include "Return.h"
#include "../IR.h"


Return::Return(Expr* e,Function* f) : Instr(e), function(f)
{
}


Return::~Return()
{
}

string Return::buildIR(CFG *cfg)
{
    vector<string> params;
    string ret = expr->buildIR(cfg);
    params.push_back(ret);
    cfg->current_bb->add_IRInstr(IRInstr::ret, params);
    return ret;
}

void Return::print(int tabs) {
    expr->print(tabs+1);
}
