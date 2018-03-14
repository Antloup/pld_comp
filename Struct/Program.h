#pragma once

#include <vector>
#include "Function.h"
#include "GlobalVar.h"

class Program
{
public:
	/* ---- Constructors / Destructor ---- */
	Program();
	~Program();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	std::vector<Function>* functions;
	std::vector<GlobalVar>* globalVars;

};

