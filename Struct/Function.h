#pragma once

#include <vector>
#include "Block.h"
#include "Param.h"
namespace RetType{
	enum RetType { CHAR , INT32_T , INT64_T, VOID };
}

class Function
{
public:
	/* ---- Constructors / Destructor ---- */
	Function();
	Function(std::string name,RetType::RetType retType);
	~Function();

	/* ------------- Methods ------------- */

	void print();
	void add(Param* param);

private:

	/* ------------ Attributs ------------ */
	std::string name;
	std::vector<Param*> params;
	Block* block;
	int retType;
};

