#pragma once
#include "Instr.h"
class If :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	If();
	~If();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Block* childIf;
	Block* childElse;
};

