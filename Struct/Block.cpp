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
}

void Block::addInstruction(Instr *i) {
    instrs.push_back(i);
    instrs.back()->setParentBlock(this);
}

void Block::buildIR(CFG *cfg) {
    for (auto &it : declares) {
        it->buildIR(cfg);
    }
    cfg->incrementSize((int)declares.size());
    cfg->tmpVarCount = cfg->getSize()+1;
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
