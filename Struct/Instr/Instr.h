#pragma once

class Expr;
class Block;
class Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Instr(Expr* e = nullptr);
	virtual ~Instr();

	/* ------------- Methods ------------- */
    void addBlock(Block* b);

private:

	/* ------------ Attributs ------------ */
	Block* parentBlock;
    Expr* expr;
};

