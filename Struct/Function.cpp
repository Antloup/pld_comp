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
    std::cout << "              Block : TODO "<< std::endl;
}

void Function::add(Param* param) {
    params.push_back(param);
}
