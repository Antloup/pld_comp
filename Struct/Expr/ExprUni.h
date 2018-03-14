#pragma once
#include "Expr.h"
class ExprUni :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprUni();
	~ExprUni();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Expr* expr;
};

