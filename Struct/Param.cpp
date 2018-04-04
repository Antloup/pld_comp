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
    std::cout << "Type : " << getType(type) << std::endl;
}

string Param::getType(int type) {
    switch(type){
        case Type::CHAR:
            return "char";
        case Type::INT32_T:
            return "int32";
        case Type::INT64_T:
            return "int64";
    }
    return "unk";
}
