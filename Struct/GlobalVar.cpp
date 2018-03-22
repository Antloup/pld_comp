#include "GlobalVar.h"
#include <iostream>


GlobalVar::GlobalVar(Type type,std::string name,int64_t value) : Var(type,name,value)
{
}


GlobalVar::~GlobalVar()
{
}

void GlobalVar::print() {
    std::cout << "GlobalVar :   Name : " << this->getName() << std::endl;
    std::cout << "              Type : " << this->getType() << std::endl;
    if(size > 1){
        std::cout << "          Array (Size : " << this->getSize() << std::endl;
    }
    else{
        std::cout << "          Value : " << this->getValue() << std::endl;
    }

}
