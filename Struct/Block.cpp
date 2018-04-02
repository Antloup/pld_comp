#include "Block.h"
#include "Instr/If.h"
#include "../Tools/PrintTool.h"


Block::Block()
{
}


Block::~Block()
{
}

void Block::addDeclare(Var *d) {
    declares.push_back(d);
    //TODO : push it to prog VarName
    //TODO : get progVarName from parentBlock and push them
}

void Block::addInstruction(Instr *i) {
    instrs.push_back(i);
    instrs.back()->setParentBlock(this);
}

void Block::buildIR(CFG *cfg) {
    // todo : compléter cette fonction
    for (auto &it : declares) {
        it->buildIR(cfg);
    }
    cfg->incrementSize(declares.size());
    for (auto &it : instrs) {
        it->buildIR(cfg);
    }
}

void Block::print(int tabs) {
    string stab = PrintTool::getTabs(tabs);
    cout << stab <<"Declares :" << endl;
    for(auto i : declares){
        i->print(tabs+1);
    }
    cout << stab <<"Instrs :" << endl;
    for(auto i : instrs){
        i->print(tabs+1);
    }
}
