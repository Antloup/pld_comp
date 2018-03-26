#pragma once
#include "Expr.h"
#include <vector>
class FunctionCall :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	FunctionCall();
	~FunctionCall();

	/* ------------- Methods ------------- */
	void print();

private:

	/* ------------ Attributs ------------ */
	std::vector<Expr>* exprs;
};

