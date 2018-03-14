#pragma once
#include "Instr.h"
class While :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	While();
	~While();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Block* child;
};

