#pragma once
#include "Expr.h"

namespace ExprUniType
{
	enum ExprUniType
	{ POSTINCR, PREINCR, INV, POSTDECR, PREDECR, NO };
}

class ExprUni :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprUni(Expr* expr, ExprUniType::ExprUniType type);
	~ExprUni();

	/* ------------- Methods ------------- */
	void print();
private:

	/* ------------ Attributs ------------ */
	Expr* expr;
	ExprUniType::ExprUniType type;
};

