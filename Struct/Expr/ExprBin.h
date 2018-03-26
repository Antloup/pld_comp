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
private:

	/* ------------ Attributs ------------ */
	Expr* expr1;
	Expr* expr2;
	ExprBinType::ExprBinType type;
};

