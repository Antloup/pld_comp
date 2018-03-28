#pragma once

#include <vector>
#include <string>

using namespace std;

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

	virtual string buildIR(CFG* cfg);
protected:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
	Expr* expr;
};

