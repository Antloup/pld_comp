#pragma once
#include "../Instr/Instr.h"

class CFG;
class Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	Expr();
	virtual ~Expr();

	/* ------------- Methods ------------- */
	virtual void print() = 0;

    void buildIR(CFG *pCFG);

    /* ------------ Attributs ------------ */
};

