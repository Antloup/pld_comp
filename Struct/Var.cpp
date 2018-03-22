#include "Var.h"
#include <iostream>


Var::Var(Type type, std::string name, int64_t value) : type(type),name(name),value(value)
{
}


Var::~Var()
{
}

Type Var::getType() const {
    return type;
}

const std::string &Var::getName() const {
    return name;
}

int Var::getSize() const {
    return size;
}

int64_t Var::getValue() const {
    return value;
}

void Var::print() {
    std::cout << "GlobalVar :   Name : " << name << std::endl;
    std::cout << "              Type : " << type << std::endl;
    if(size > 1){
        std::cout << "          Array (Size : " << size << std::endl;
    }
    else{
        std::cout << "          Value : " << value << std::endl;
    }

}