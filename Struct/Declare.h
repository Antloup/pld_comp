#pragma once
#include "Var.h"
class Declare :
	public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	Declare(Type::Type type,std::string name,int64_t value);
	~Declare();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
};

