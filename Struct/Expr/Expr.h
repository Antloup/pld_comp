#pragma once
#include "../Instr/Instr.h"
#include <string>
using namespace std;
class CFG;
class Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	Expr();
	virtual ~Expr();

	/* ------------- Methods ------------- */
	virtual void print(int tabs=0) = 0;

    virtual string buildIR(CFG *cfg) = 0;

protected:
	/* ------------ Attributs ------------ */
	Block *parentBlock;
};

