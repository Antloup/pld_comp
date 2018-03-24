#pragma once

#include "Declare.h"
#include "Instr/Instr.h"
#include <vector>

class Block
{
public:
	/* ---- Constructors / Destructor ---- */
	Block();
	~Block();

	/* ------------- Methods ------------- */
	void addDeclare(Declare* d);
	void addInstruction(Instr *i);

private:

	/* ------------ Attributs ------------ */
	std::vector<Declare*> declares;
	std::vector<Instr*> instrs;
};

