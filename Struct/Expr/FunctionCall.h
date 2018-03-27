#pragma once
#include "Expr.h"
#include "../Function.h"
#include <vector>
class FunctionCall :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	FunctionCall(Function* function);
	~FunctionCall();

	/* ------------- Methods ------------- */
	void print();
	void addParam(Expr* expr);

private:

	/* ------------ Attributs ------------ */
	std::vector<Expr*> exprs;
	Function* function;
};

