#pragma once

class Block;

class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr(Block* pb);
	virtual ~Instr();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
};

