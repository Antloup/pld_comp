#pragma once
#include "Expr.h"

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
	ExprBin(Expr* expr1, ExprBinType::ExprBinType type, Expr* expr2);
	~ExprBin();

	/* ------------- Methods ------------- */
	void print();
	void buildIR(CFG *cfg);
private:

	/* ------------ Attributs ------------ */
	Expr* exprLeft;
	Expr* exprRight;
	ExprBinType::ExprBinType type;
};

