#include "GlobalVar.h"
#include <iostream>


GlobalVar::GlobalVar(Type::Type type,std::string name,Expr *expr) : Var(type,name,expr)
{
}


GlobalVar::~GlobalVar()
{
}
