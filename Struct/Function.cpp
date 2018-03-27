#include "Function.h"
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
    // todo : compléter cette fonction
    // todo : (peut-être) ajouter des buildIR ici
    block->buildIR(cfg);
}
