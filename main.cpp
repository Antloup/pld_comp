#include <iostream>

#include "antlr4-runtime.h"
#include "antlr/ProgLexer.h"
#include "antlr/ProgParser.h"
#include "antlr/Prog.h"

using namespace std;
using namespace antlr4;

int main(int argc, char **argv){
    bool printToken = false;
    bool printStruct = false;
    bool printIR = false;
    if(argc <= 1){
        cerr << "Not enough parameters" << endl;
        return 1;
    }
    ifstream prgFile;
    prgFile.open(argv[1]);
    if(!prgFile.is_open()){
        cerr << "Can't open file" << endl;
        return 2;
    }
    for(int i=2;i<argc;i++){
        cout << "argv:" <<argv[i] << endl;
        if((string)argv[i] == "--token") printToken = true;
        else if((string)argv[i] == "--struct") printStruct= true;
        else if((string)argv[i] == "--ir") printIR= true;
    }

    string prg;
    string line;
    while (!prgFile.eof())
    {
        getline(prgFile, line);
        prg += line+"\n";
    }
	ANTLRInputStream input(prg);
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
    tokens.fill();

	ProgParser parser(&tokens);
	tree::ParseTree* tree = parser.program();

	Prog visitor;

    Program* prog = visitor.visit(tree);

    if(printToken){
        for (auto token : tokens.getTokens()) {
            std::cout << token->toString() << std::endl;
        }
    }

    if(printStruct){
        prog->print();
    }

    if(printIR){
        //todo
    }

//    on crée l'IR
    prog->buildIR();
//    on génère l'assembleur
    for (auto &it : prog->getCFGs()) {
        it->gen_asm(cout);
    }
	return 0;
}
