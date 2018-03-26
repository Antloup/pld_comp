//
// Created by nathan on 26/03/18.
//

#include "IR.h"

CFG::CFG() {

}

void CFG::add_bb(BasicBlock *bb) {

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

string CFG::create_new_tempvar(Var t) {
    return std::__cxx11::string();
}

int CFG::get_var_index(string name) {
    return 0;
}


string CFG::new_BB_name() {
    return std::__cxx11::string();
}

Var CFG::get_var_type(string name) {
    return Var(Type::CHAR, __cxx11::basic_string<char, char_traits<char>, allocator<char>>(), 0);
}
