#pragma once
#include <string>
enum Type { CHAR , INT32_T , INT64_T };

class Var
{
public:
	/* ---- Constructors / Destructor ---- */
	Var();
	virtual ~Var();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	Type type;
	std::string name;
	int size;
};

