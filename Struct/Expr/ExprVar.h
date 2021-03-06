#pragma once
#include "Expr.h"
#include "../Var.h"

using namespace std;
class ExprVar :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprVar(Var* var, Block *block);
	~ExprVar();

	/* ------------- Methods ------------- */
	void print(int tabs=0);
	string buildIR(CFG *cfg, bool isComparedToZero = false);

private:

	/* ------------ Attributs ------------ */
	Var* var;
};

