#include "Param.h"
#include <iostream>


Param::Param(SigType::SigType type,std::string name) : type(type), name(name)
{
}


Param::~Param()
{
}

void Param::print(int tab) {
    std::cout << "Name : " << name << std::endl;
    std::cout << "Type : " << type << std::endl;
}
