#include <iostream>

#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "Expr.h"

using namespace std;
using namespace antlr4;

int main(void){
	string userInput;
	cin>>userInput;
	ANTLRInputStream input(userInput);
	ExprLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	ExprParser parser(&tokens);
	tree::ParseTree* tree = parser.program();

	Expr visitor;
	int resultat = (int)visitor.visit(tree);
	cout << "Res "<< resultat << endl;
	return 0;
}
