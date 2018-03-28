#pragma once
#include "Expr.h"
#include "../Var.h"

using namespace std;
class ExprVar :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprVar(Var* var);
	~ExprVar();

	/* ------------- Methods ------------- */
	void print();
	string buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
	Var* var;
};

