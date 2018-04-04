#include "GlobalVar.h"
#include "IR.h"
#include "../Tools/PrintTool.h"

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

void GlobalVar::print(int tabs) {
        string stab = PrintTool::getTabs(tabs);
        std::cout << stab <<"GlobalVar :" << endl;
        string stab2 = PrintTool::getTabs(tabs+1);
        cout << stab2 <<"Name : " << name << std::endl;
        std::cout << stab2 <<"Type : " << getType(type) << std::endl;
        if(size > 1){
                std::cout << stab2 <<"Array (Size : " << size << std::endl;
        }
}
