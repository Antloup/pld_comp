#include "Param.h"
#include <iostream>


Param::Param(SigType::SigType type,std::string name)
{
}


Param::~Param()
{
}

void Param::print() {
    std::cout << "Name : " << name << std::endl;
    std::cout << "Type : " << type << std::endl;
}
