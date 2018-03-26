#pragma once
#include "Expr.h"
#include "../Var.h"

class ExprVar :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprVar(Var* var);
	~ExprVar();

	/* ------------- Methods ------------- */
	void print();
private:

	/* ------------ Attributs ------------ */
	Var* var;
};

