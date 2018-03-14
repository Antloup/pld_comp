#pragma once
#include "Instr.h"

class Expr;

class Return :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Return();
	~Return();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Expr* expr;
};

