#pragma once

#include <vector>

class Expr;
class Block;
class CFG;
class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr(Expr* expr);
	virtual ~Instr();

	/* ------------- Methods ------------- */
    void addBlock(Block* b);
	virtual void buildIR(CFG* cfg);
protected:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
	Expr* expr;
};

