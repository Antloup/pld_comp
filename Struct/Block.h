#pragma once

#include "Instr/Instr.h"
#include "Var.h"
#include <vector>

class Program;

class Block
{
public:
	/* ---- Constructors / Destructor ---- */
	Block();
	~Block();

	/* ------------- Methods ------------- */
	void addDeclare(Var* d);
	void addInstruction(Instr *i);

    void buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
	std::vector<Var*> declares;
	std::vector<Instr*> instrs;
};

