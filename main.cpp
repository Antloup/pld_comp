#include <iostream>

#include "antlr4-runtime.h"
#include "antlr/ProgLexer.h"
#include "antlr/ProgParser.h"
#include "antlr/Prog.h"

using namespace std;
using namespace antlr4;

int main(void){
	string userInput = "int32_t a=5;\nint32_t b=4; int32_t main(){int64_t c; c = 4 + a;}";
//	cin>>userInput;
	ANTLRInputStream input(userInput);
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

    visitor.visit(tree);
	return 0;
}
