#pragma once
#include "Var.h"

namespace SigType{
	enum SigType { CHAR , INT32_T , INT64_T, CHAR_ARRAY, INT32_T_ARRAY, INT64_T_ARRAY };
}

class Param
{
public:
	/* ---- Constructors / Destructor ---- */
	Param(SigType::SigType type,std::string name);
	~Param();

	/* ------------- Methods ------------- */
	void print();

private:

	/* ------------ Attributs ------------ */
	SigType::SigType type;
	std::string name;
};

