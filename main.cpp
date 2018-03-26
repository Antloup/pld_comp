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

    cout << "Program :" << endl;
    while (!prgFile.eof())
    {
        getline(prgFile, line);
        prg += line;
        cout << line << endl;
    }
	//string userInput = "int32_t a=5;\nint32_t b=4; int32_t main(){int64_t c; c = 4 + a;}";
	ANTLRInputStream input(prg);
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }
	ProgParser parser(&tokens);
	tree::ParseTree* tree = parser.program();
    std::cout<<tree->toStringTree(&parser)<<std::endl;

	Prog visitor;

    Program* prog = visitor.visit(tree);
    cout << "----------------------------------------------------------" << endl;
    CFG* cfg = new CFG();
    prog->buildIR(cfg);
    cfg->print();
	return 0;
}
