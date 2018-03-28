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

}

string CFG::IR_reg_to_asm(string reg) {
    return std::__cxx11::string();
}

//parcourt le CFG pour calculer la taille de l'AR (nombre de variables * 8 octets)
void CFG::gen_asm_prologue(ostream &o) {
}

void CFG::gen_asm_epilogue(ostream &o) {

}

void CFG::add_to_symbol_table(string name, Var t) {

}

string CFG::create_new_tempvar() {
    string tmp = "tmp"+tmpVarCount;
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
        for (auto &jt : it->instrs) {
            jt->print();
        }
    }
}

BasicBlock::BasicBlock(CFG *cfg, string entry_label):cfg(cfg),label(entry_label){}

void BasicBlock::add_IRInstr(IRInstr::Operation op, vector<string> params) {
    this->instrs.push_back(new IRInstr(this,op,params));
}

IRInstr::IRInstr(BasicBlock *bb, IRInstr::Operation op, vector<string> params) :bb(bb),op(op),params(params){}

void IRInstr::print() {
    cout << op << " " << params[0] << " " << params[1] << endl;
}
