#pragma once

#include <vector>
#include <map>
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
	void addVarName(Block* b, std::string name);
	void print();

private:

	/* ------------ Attributs ------------ */
	std::vector<Function*> functions;
	std::vector<GlobalVar*> globalVars;
	std::map<std::pair<std::string,Block*>,Var*> varName;

};

