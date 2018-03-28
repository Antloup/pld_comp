#include "GlobalVar.h"
#include "IR.h"

using namespace std;
GlobalVar::GlobalVar(Type::Type type,std::string name,Expr* expr) : Var(type,name,expr)
{
}


GlobalVar::~GlobalVar()
{
}

string GlobalVar::buildIR(CFG *cfg) {


        vector<string> params;
        string dest = name;
        string source = expr->buildIR(cfg);
        params.push_back(dest);
        params.push_back(source);
        cfg->current_bb->add_IRInstr(IRInstr::copy, params);

        return name;
}