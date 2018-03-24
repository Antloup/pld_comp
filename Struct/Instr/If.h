#pragma once
#include "Instr.h"

class If :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	If(Expr* e, Block* ifBlock,Block* elseBlock = nullptr);
	~If();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Block* childIf;
	Block* childElse;
};

