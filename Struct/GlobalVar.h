#pragma once
#include "Var.h"

class GlobalVar :
        public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	GlobalVar();
	GlobalVar(Type::Type type, std::string name, Expr* expr);
	~GlobalVar();

	/* ------------- Methods ------------- */
	string buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
};