#pragma once

#include <vector>
#include <map>
#include "Function.h"
#include "GlobalVar.h"
#include "IR.h"

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
	static string getTabs(int tabs);

    vector<CFG*> getCFGs();

private:

	/* ------------ Attributs ------------ */
	std::vector<Function*> functions;
	std::vector<GlobalVar*> globalVars;
    vector<CFG*> cfgs;
};

