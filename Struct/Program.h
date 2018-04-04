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

	map<string, Function *> *getFunctionTable() const;

	void setFunctionTable(map<string, Function *> *functionTable);
	map<pair<Block *, string>, Var *> *getVarTable() const;

	void setVarTable(map<pair<Block *, string>, Var *> *varTable);

private:
	/* ------------ Attributs ------------ */
	std::vector<Function*> functions;
	std::vector<GlobalVar*> globalVars;
	vector<CFG*> cfgs;
	std::map<std::pair<Block*,std::string>,Var*>* varTable;
	std::map<std::string,Function*>* functionTable;

};

