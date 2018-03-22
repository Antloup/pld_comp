#pragma once
#include "Var.h"
class Param :
	public Var
{
public:
	/* ---- Constructors / Destructor ---- */
	Param(Type type,std::string name,int64_t value);
	~Param();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
};

