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
	void buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
	Var* var;
};

