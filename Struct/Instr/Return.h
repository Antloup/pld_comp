#pragma once
#include "Instr.h"
#include "../Function.h"
#include <string>

using namespace std;
class Expr;

class Return :
	public Instr
{
public:
	/* ---- Constructors / Destructor ---- */
	Return(Expr* e,Function* f);
	~Return();
	void print(int tabs=0);

	/* ------------- Methods ------------- */
	string buildIR(CFG *cfg);


private:
	Function* function;
	/* ------------ Attributs ------------ */
};

