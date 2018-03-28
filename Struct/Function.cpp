#include "Function.h"
#include "IR.h"
#include <iostream>


Function::Function()
{
}


Function::~Function()
{
}

Function::Function(std::string name, RetType::RetType retType) : name(name), retType(retType)
{

}

void Function::print() {
    std::cout << "Function :    Name : " << name << std::endl;
    std::cout << "              RetType : " << retType << std::endl;
    std::cout << "              Params : "<< std::endl;
    for(auto i : params){
        // Print each params
        (*i).print();
    }
    std::cout << "              Block : "<< block << std::endl;
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
