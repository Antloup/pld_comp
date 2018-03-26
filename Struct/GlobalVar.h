#pragma once
#include "Var.h"
#include "Expr/Expr.h"

class GlobalVar :
	public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	GlobalVar();
	GlobalVar(Type::Type type, std::string name, Expr* expr);

	~GlobalVar();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
};

