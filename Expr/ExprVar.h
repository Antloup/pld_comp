#pragma once
#include "Expr.h"
#include "../Var.h"

class ExprVar :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprVar();
	~ExprVar();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Var* var;
};

