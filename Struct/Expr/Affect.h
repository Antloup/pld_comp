#pragma once
#include "Expr.h"
#include "../Var.h"

class Affect :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	Affect(Var *var, Expr *expr, Block *block);
	~Affect();

	/* ------------- Methods ------------- */
	void print(int tabs=0);
	string buildIR(CFG* cfg, bool isComparedToZero = false);
private:

	/* ------------ Attributs ------------ */
	Var* var;
	Expr* expr;
};

