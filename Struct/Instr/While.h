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
	void setProgram(Program* p);

private:

	/* ------------ Attributs ------------ */
	Block* child;
	Expr *condition;
};

