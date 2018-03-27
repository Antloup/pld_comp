#include "GlobalVar.h"
#include <vector>

using namespace std;
GlobalVar::GlobalVar(Type::Type type,std::string name,Expr* expr) : Var(type,name,expr)
{
}


GlobalVar::~GlobalVar()
{
}

void GlobalVar::buildIR(CFG *cfg) {
        vector<string> params;
        params.push_back(name);
        params.push_back("valeur expression");
        cfg->current_bb->add_IRInstr(IRInstr::ldconst,*this, params);
}