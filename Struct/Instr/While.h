#pragma once
#include "Instr.h"
#include "../Program.h"

class While :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	While(Expr* e,Block* b);
	~While();

	/* ------------- Methods ------------- */
	string buildIR(CFG* cfg);

private:

	/* ------------ Attributs ------------ */
	Block* child;
};

