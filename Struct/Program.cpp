#include "Program.h"
#include <iostream>


Program::Program()
{
}


Program::~Program()
{
}

void Program::addGlobalVar(GlobalVar *gv) {
    globalVars.push_back(gv);
}

void Program::addFunction(Function *f) {
    functions.push_back(f);
}

void Program::print() {
    int tabs = 0;
    cout << "------ Program Structure ------" << endl;

    cout << "--- GLOBAL VARS ---" << endl;
    for(auto i : globalVars){
        i->print(tabs+1);
    }
    cout << "--- FUNCTIONS ---" << endl;
    for(auto i : functions){
        i->print(tabs+1);
    }
}

void Program::buildIR() {
    CFG* cfg  = new CFG(nullptr);
    cfgs.push_back(cfg);
    for(auto &it : globalVars) {
        it->buildIR(cfg);
    }
    for(auto &it : functions) {
        CFG* function_cfg = new CFG(it);
        cfgs.push_back(function_cfg);
        it->buildIR(function_cfg);
    }
}

vector<CFG*> Program::getCFGs() {
    return cfgs;
}
