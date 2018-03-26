#pragma once
#include "Var.h"
#include "IR.h"

class GlobalVar :
        public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	GlobalVar();
	GlobalVar(Type::Type type, std::string name, Expr* expr);
	~GlobalVar();

	/* ------------- Methods ------------- */

	void buildIR(CFG* cfg);
private:

	/* ------------ Attributs ------------ */
};