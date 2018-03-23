#include "GlobalVar.h"
#include <iostream>


GlobalVar::GlobalVar(Type::Type type,std::string name,int64_t value) : Var(type,name,value)
{
}


GlobalVar::~GlobalVar()
{
}
