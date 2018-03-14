#pragma once

class Block;

class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr();
	virtual ~Instr();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
};

