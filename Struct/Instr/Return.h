#pragma once
#include "Instr.h"

class Expr;

class Return :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Return(Expr* e);
	~Return();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Expr* expr;
};

