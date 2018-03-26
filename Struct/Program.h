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
	void addGlobalVar(GlobalVar* gv);
	void addFunction(Function* f);
	void print();
	void buildIR();
	std::vector<Function*> getFunctions();
	std::vector<GlobalVar*> getGlobalVars();

private:

	/* ------------ Attributs ------------ */
	std::vector<Function*> functions;
	std::vector<GlobalVar*> globalVars;

};

