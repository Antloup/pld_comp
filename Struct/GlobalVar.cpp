#include "GlobalVar.h"

using namespace std;
GlobalVar::GlobalVar(Type::Type type,std::string name,Expr* expr) : Var(type,name,expr)
{
}


GlobalVar::~GlobalVar()
{
}