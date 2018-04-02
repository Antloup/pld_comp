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
    BasicBlock* epilogue = new BasicBlock(cfg, "epilogue");
    cfg->current_bb->exit_true = epilogue;
    epilogue->exit_true = nullptr;
    cfg->add_bb(epilogue);
    return ret;
}

void Return::print(int tabs) {
    expr->print(tabs+1);
}
