#include "Var.h"
#include "IR.h"
#include "../Tools/PrintTool.h"

using namespace std;


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

void Var::print(int tabs) {
    string stab = PrintTool::getTabs(tabs);
    cout << stab <<"Var :"<<endl;
    cout << stab <<"Name : " << name << endl;
    cout << stab <<"Type : " << getType(type) << endl;
    if(size > 1){
        cout << stab <<"Array (Size : " << size << endl;
    }
}

void Var::buildIR(CFG *cfg) {
//    vector<string> params;
//    params.push_back(name);
//    cfg->current_bb->add_IRInstr(IRInstr::ldconst, params);
}

void Var::setAddr(int addr) {
    this->addr = addr;
}

int Var::getAddr()
{
    return this->addr;
}

string Var::getType(int type) {
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
