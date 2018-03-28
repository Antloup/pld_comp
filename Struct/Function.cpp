#include "Function.h"
#include "IR.h"
#include <iostream>
#include "../Tools/PrintTool.cpp"


Function::Function()
{
}


Function::~Function()
{
}

Function::Function(std::string name, RetType::RetType retType) : name(name), retType(retType)
{

}

void Function::print(int tabs) {
    cout << "Function :" << endl;
    string stab = PrintTool::getTabs(tabs);
    cout << stab <<"Name : " << name << endl;
    cout << stab <<"RetType : " << retType << endl;
    cout << stab <<"Params : "<< endl;
    for(auto i : params){
        // Print each params
        (*i).print(tabs+1);
    }
    cout << stab << "Block ("<< block << ") :" <<endl;
    block->print(tabs+1);
}

void Function::addParam(Param* param) {
    params.push_back(param);
}

void Function::addBlock(Block *b) {
    block = b;
}

void Function::buildIR(CFG* cfg) {
    cout << "buildIR Function" << endl;
    // todo : compléter cette fonction
    // todo: buildIR Param ?
    block->buildIR(cfg);

    BasicBlock* functionBB = cfg->current_bb;

    BasicBlock* afterBB = new BasicBlock(cfg,"EndFunction");
    // todo : inverser exit_true et exit_false ? gneuh ô.O
    functionBB->exit_true = afterBB;
    functionBB->exit_false = nullptr;
    cfg->add_bb(afterBB);


}

string Function::getName() {
    return name;
}
