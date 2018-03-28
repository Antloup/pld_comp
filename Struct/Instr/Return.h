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
	void buildIR(CFG *cfg);


private:

	/* ------------ Attributs ------------ */
};

