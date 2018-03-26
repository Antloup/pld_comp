#pragma once
#include "Expr.h"
class Affect :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	Affect();
	~Affect();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Var* var;
	Expr* expr2;
};

