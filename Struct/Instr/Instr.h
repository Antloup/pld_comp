#pragma once

#include <vector>

class Expr;
class Block;
class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr(Expr* expr);
	virtual ~Instr();

	/* ------------- Methods ------------- */
    void addBlock(Block* b);

private:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
	Expr* expr;
};

