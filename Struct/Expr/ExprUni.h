#pragma once
#include "Expr.h"

using namespace std;
namespace ExprUniType
{
	enum ExprUniType
	{ POSTINCR, PREINCR, INV, POSTDECR, PREDECR, NO };
}

class ExprUni :
	public Expr
{
public:
	/* ---- Constructors / Destructor ---- */
	ExprUni(Expr* expr, ExprUniType::ExprUniType type);
	~ExprUni();

	/* ------------- Methods ------------- */
	void print();
	string buildIR(CFG *cfg);

private:

	/* ------------ Attributs ------------ */
	Expr* expr;
	ExprUniType::ExprUniType type;
};

