#pragma once
#include "Instr.h"
#include "../Program.h"
#include <string>

using namespace std;

class If :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	If(Expr* e, Block* ifBlock,Block* elseBlock = nullptr);
	~If();

	/* ------------- Methods ------------- */
	string buildIR(CFG* cfg);
	void print(int tabs=0);

protected:

	/* ------------ Attributs ------------ */
	Block* childIf;
	Block* childElse;
};

