#pragma once
#include "../Instr/Instr.h"

class Expr :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Expr();
	virtual ~Expr();

	/* ------------- Methods ------------- */
	virtual void print() = 0;
private:

	/* ------------ Attributs ------------ */
};

