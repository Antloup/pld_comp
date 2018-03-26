#pragma once

#include "Instr/Instr.h"
#include "Var.h"
#include <vector>

class Block
{
public:
	/* ---- Constructors / Destructor ---- */
	Block();
	~Block();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	std::vector<Var>* declares;
	std::vector<Instr>* instrs;
};

