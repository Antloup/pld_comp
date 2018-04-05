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
    string ret;
    if(expr) {
        ret = expr->buildIR(cfg);
    } else {
        ret = "0";
    }
    params.push_back(ret);
    cfg->current_bb->add_IRInstr(IRInstr::ret,params);
    BasicBlock* epilogue = new BasicBlock(cfg, "epilogue");
    cfg->current_bb->exit_true = epilogue;
    epilogue->exit_true = nullptr;
    epilogue->exit_false = nullptr;
    cfg->add_bb(epilogue);
    return ret;
}

void Return::print(int tabs) {
    expr->print(tabs+1);
}
