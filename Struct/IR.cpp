//
// Created by nathan on 26/03/18.
//

#include "IR.h"

using namespace std;

CFG::CFG() {
    BasicBlock* prologue = new BasicBlock(this, "prologue");
    BasicBlock* epilogue = new BasicBlock(this, "epilogue");
    prologue->exit_true = epilogue;
    epilogue->exit_false = nullptr;
    bbs = std::vector<BasicBlock*>(0);
    add_bb(prologue);
    add_bb(epilogue);
    current_bb = prologue;
    bbs.push_back(epilogue);
}

void CFG::add_bb(BasicBlock *bb) {
    bbs.push_back(bb);
    current_bb = bb;
}

void CFG::gen_asm(ostream &o) {
    gen_asm_prologue(o);
    //todo : parcours du CFG

    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg) {
    return std::__cxx11::string();
}

//todo : parcourt le CFG pour calculer la taille de l'AR (nombre de variables * 8 octets + 8) ; METHODE A PART ?
void CFG::gen_asm_prologue(ostream &o) {
    o << "pushq %rbp" << endl;
    o << "movq %rsp, %rbp" <<endl;
    o << "sub $" << "TAILLE_AR_CALCULEE" << ", %rsp" <<endl;
}

void CFG::gen_asm_epilogue(ostream &o) {
    o << "leave" << endl;
    o << "ret" << endl;
}

void CFG::add_to_symbol_table(string name, Var t) {

}

string CFG::create_new_tempvar() {
    string tmp = "tmp"+to_string(tmpVarCount);
    tmpVarCount++;
    return tmp;
}

int CFG::get_var_index(string name) {
    return 0;
}


string CFG::new_BB_name() {
    return std::__cxx11::string();
}

Var CFG::get_var_type(string name) {
    return Var(Type::CHAR, basic_string<char, char_traits<char>, allocator<char>>(), 0);
}

void CFG::print() {
    // todo : à remplacer par un parcours intelligent qui passe par les pointeurs (exit_true/false et compagnie)
    for (auto &it : bbs) {
        it->print();
    }
}

BasicBlock::BasicBlock(CFG *cfg, string entry_label):cfg(cfg),label(entry_label){}

void BasicBlock::add_IRInstr(IRInstr::Operation op, vector<string> params) {
    this->instrs.push_back(new IRInstr(this,op,params));
}

IRInstr::IRInstr(BasicBlock *bb, IRInstr::Operation op, vector<string> params) :bb(bb),op(op),params(params){}

void BasicBlock::gen_asm(ostream& o) {}

void BasicBlock::print() {
    cout << "----- Block : " + label << "-----" << endl;
    for (auto &it : instrs) {
        it->print();
    }
    cout << endl;
}


void IRInstr::print() {
    string opName = "unk";
    switch(op){
        case IRInstr::ldconst:
            opName = "ldconst";
            break;
        case IRInstr::add:
            opName = "add";
            break;
        case IRInstr::sub:
            opName = "sub";
            break;
        case IRInstr::mul:
            opName = "mul";
            break;
        case IRInstr::copy:
            opName = "copy";
            break;
        case IRInstr::rmem:
            opName = "rmem";
            break;
        case IRInstr::wmem:
            opName = "wmem";
            break;
        case IRInstr::call:
            opName = "call";
            break;
        case IRInstr::cmp_eq:
            opName = "cmp_eq";
            break;
        case IRInstr::cmp_lt:
            opName = "cmp_lt";
            break;
        case IRInstr::cmp_le:
            opName = "cmp_le";
            break;
        case IRInstr::no:
            opName = "no";
            break;
        case IRInstr::ret:
            opName = "ret";
        case IRInstr::cmp_ge:
            opName = "cmp_ge";
            break;
        case IRInstr::cmp_gt:
            opName = "cmp_gt";
            break;
        case IRInstr::and_op:
            opName = "and_op";
            break;
        case IRInstr::or_op:
            opName = "or_op";
            break;
        case IRInstr::div:
            opName = "div";
            break;
        case IRInstr::cmp_neq:
            opName = "cmp_neq";
            break;
    }
    cout << opName;
    for(auto i : params){
        cout<< " "<<i ;
    }
    cout<<endl;
}

void IRInstr::gen_asm(ostream& o) {}