#include <iostream>

#include "antlr4-runtime.h"
#include "antlr/ProgLexer.h"
#include "antlr/ProgParser.h"
#include "antlr/Prog.h"

using namespace std;
using namespace antlr4;

int main(void){
    ifstream prgFile;
    prgFile.open("../prg.cpto");
    string prg;
    string line;
    if(!prgFile.is_open()){
        cerr << "Can't open file" << endl;
        return 1;
    }

    while (!prgFile.eof())
    {
        getline(prgFile, line);
        prg += line+"\n";
    }
	ANTLRInputStream input(prg);
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
    tokens.fill();
//    for (auto token : tokens.getTokens()) {
//        std::cout << token->toString() << std::endl;
//    }
	ProgParser parser(&tokens);
	tree::ParseTree* tree = parser.program();

	Prog visitor;

    Program* prog = visitor.visit(tree);
//    on crée l'IR
    prog->buildIR();
//    on génère l'assembleur
    for (auto &it : prog->getCFGs()) {
        it->gen_asm(cout);
    }
	return 0;
}
