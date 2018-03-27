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
    void setParentBlock(Block* b);
    Block* getParentBlock();

	virtual void buildIR(CFG* cfg);
protected:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
	Expr* expr;
};

