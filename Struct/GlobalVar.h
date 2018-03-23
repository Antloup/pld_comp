#pragma once
#include "Var.h"
class GlobalVar :
	public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	GlobalVar();
	GlobalVar(Type::Type type, std::string name, int64_t value);

	~GlobalVar();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
};

