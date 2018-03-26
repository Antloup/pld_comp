#include "Var.h"
#include <iostream>


Var::Var(Type::Type type, std::string name, Expr *expr) : type(type),name(name),expr(expr)
{
}


Var::~Var()
{
}

Type::Type Var::getType() const {
    return type;
}

const std::string &Var::getName() const {
    return name;
}

int Var::getSize() const {
    return size;
}

Expr* Var::getExpr() const {
    return expr;
}

void Var::print() {
    std::cout << "GlobalVar :   Name : " << name << std::endl;
    std::cout << "              Type : " << type << std::endl;
    if(size > 1){
        std::cout << "          Array (Size : " << size << std::endl;
    }
}