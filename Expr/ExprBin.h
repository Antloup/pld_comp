#pragma once
#include "Expr.h"
class ExprBin :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprBin();
	~ExprBin();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Expr* expr1;
	Expr* expr2;
};

