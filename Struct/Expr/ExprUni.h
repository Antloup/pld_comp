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
	ExprUni(Expr* expr, ExprUniType::ExprUniType type, Block *block);
	~ExprUni();

	/* ------------- Methods ------------- */
	void print(int tabs=0);
	string buildIR(CFG *cfg, bool isComparedToZero = false);
	string getType(int type);

private:

	/* ------------ Attributs ------------ */
	Expr* expr;
	ExprUniType::ExprUniType type;
};

