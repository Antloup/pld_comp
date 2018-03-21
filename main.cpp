#include <iostream>

#include "antlr4-runtime.h"
#include "antlr/ProgLexer.h"
#include "antlr/ProgParser.h"
#include "antlr/Prog.h"

using namespace std;
using namespace antlr4;

int main(void){
	string userInput;
	cin>>userInput;
	ANTLRInputStream input(userInput);
	ProgLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	ProgParser parser(&tokens);
	tree::ParseTree* tree = parser.program();

	Prog visitor;
	int resultat = (int)visitor.visit(tree);
	cout << "Res "<< resultat << endl;
	return 0;
}
