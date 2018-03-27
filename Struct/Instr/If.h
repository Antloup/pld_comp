#pragma once
#include "Instr.h"
#include "../Program.h"

class If :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	If(Expr* e, Block* ifBlock,Block* elseBlock = nullptr);
	~If();

	/* ------------- Methods ------------- */
	void buildIR(CFG* cfg);

protected:

	/* ------------ Attributs ------------ */
	Block* childIf;
	Block* childElse;
};

