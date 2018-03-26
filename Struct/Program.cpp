#include "Program.h"
#include "IR.h"
#include <fstream>
using namespace std;

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

void Program::buildIR(CFG *cfg) {
    for(auto &it : globalVars) {
        it->buildIR(cfg);
    }

}

//    ofstream fichier ("main.s", ios::out);
//    fichier << ".text" << endl;
//    fichier << ".global main" << endl << endl;
//    fichier << "main:" << endl << endl;
//    fichier << "movl $'O', %edi" << endl;
//    fichier << "call putchar" << endl;
//    fichier << "movl $'K', %edi" << endl;
//    fichier << "call putchar" << endl;
//    fichier << "movl $'\\n', %edi" << endl;
//    fichier << "call putchar" << endl << endl;
//    fichier << "retq" << endl;
