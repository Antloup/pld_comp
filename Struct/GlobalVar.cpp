#include "GlobalVar.h"
#include <vector>

using namespace std;
GlobalVar::GlobalVar(Type::Type type,std::string name,int64_t value) : Var(type,name,value)
{
}


GlobalVar::~GlobalVar()
{
}

void GlobalVar::buildIR(CFG *cfg) {
    if (value != 0) {
        BasicBlock* bb = new BasicBlock(cfg,"globalvar " + name);
        vector<string> params;
        params.push_back(name);
        params.push_back(to_string(value));
        bb->add_IRInstr(IRInstr::ldconst,*this, params);
        cfg->add_bb(bb);
    }

}
