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

    string name(argv[1]);
    ofstream file;
    file.open(name.substr(0, name.find(".cpto")) + ".s");
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

    //Analyse syntaxique
	ProgParser parser(&tokens);
	tree::ParseTree* tree = parser.program();
    size_t nbSyntaxErrors=parser.getNumberOfSyntaxErrors();
	if(nbSyntaxErrors!=0){
	    cerr<< "Il y a "<<nbSyntaxErrors<<" erreur(s) de syntaxe! \nCompilation échouée."<<endl;
	    return 3;
	}

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

    //    on crée l'IR
    prog->buildIR();

    if(printIR){
        for (auto &it : prog->getCFGs()) {
            it->printIR(cout);
        }
    }

    //    on génère l'assembleur
    for (auto &it : prog->getCFGs()) {
        it->gen_asm(file);
    }

    file.close();

	return 0;
}
