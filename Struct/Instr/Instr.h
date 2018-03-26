#pragma once

#include <vector>

class Expr;
class Block;
class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr();
	virtual ~Instr();

	/* ------------- Methods ------------- */
    void addBlock(Block* b);

private:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
};

