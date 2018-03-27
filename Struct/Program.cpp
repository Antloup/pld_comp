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
