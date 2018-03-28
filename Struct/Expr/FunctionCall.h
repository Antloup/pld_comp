#pragma once
#include "Expr.h"
#include "../Function.h"
#include <vector>
#include <string>
using namespace std;
class FunctionCall :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	FunctionCall(Function* function);
	~FunctionCall();

	/* ------------- Methods ------------- */
	void print(int tabs=0);
	void addParam(Expr* expr);
	string buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
	std::vector<Expr*> exprs;
	Function* function;
};

