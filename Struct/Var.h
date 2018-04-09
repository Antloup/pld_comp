#pragma once
#include <string>
#include <iostream>
#include "Expr/Expr.h"


namespace Type{
	enum Type { CHAR , INT32_T , INT64_T };
}


class Var
{
public:
	/* ---- Constructors / Destructor ---- */
	Var(Type::Type type, std::string name, Expr *expr);
	virtual ~Var();

	/* ------------- Methods ------------- */

	Type::Type getType() const;

	const std::string &getName() const;

	int getSize() const;

	Expr* getExpr() const;

	virtual void print(int tabs=0);

	void buildIR(CFG* cfg);

    void setAddr(int addr);

	int getAddr();

	string getType(int type);

protected:
	/* ------------ Attributs ------------ */
	Type::Type type;
	std::string name;
	int size = 0;
	Expr *expr;
    int addr;
};

