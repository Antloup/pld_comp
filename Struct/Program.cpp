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
    std::cout << "Program" << std::endl;
}

void Program::addVarName(Block *b, std::string name)
{
//TODO
}

void Program::buildIR(CFG *cfg) {
    for(auto &it : globalVars) {
        it->buildIR(cfg);
    }
    for(auto &it : functions) {
        it->buildIR(cfg);
    }
}
