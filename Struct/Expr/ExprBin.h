#pragma once
#include "Expr.h"

using namespace std;

namespace ExprBinType
{
	enum ExprBinType
	{ MULT, DIV, PLUS, MINUS, MODULO, EGAL, DIFF, SUP, SUPEGAL, INF, INFEGAL, OR, AND };
}
class ExprBin :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprBin(Expr* expr1, ExprBinType::ExprBinType type, Expr* expr2, Block* block);
	~ExprBin();

	/* ------------- Methods ------------- */
	void print(int tabs=0);
	string buildIR(CFG *cfg);
	string getType(int type);

private:

	/* ------------ Attributs ------------ */
	Expr* exprLeft;
	Expr* exprRight;
	ExprBinType::ExprBinType type;
};

