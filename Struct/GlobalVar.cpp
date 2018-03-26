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
//    if (value != 0) {
        BasicBlock* bb = new BasicBlock(cfg,"globalvar " + name);
        vector<string> params;
        params.push_back(name);
        params.push_back("valeur_expression");
        bb->add_IRInstr(IRInstr::ldconst,*this, params);
        cfg->add_bb(bb);
//    }

}