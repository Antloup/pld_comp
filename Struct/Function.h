#pragma once

#include <vector>
#include "Block.h"
#include "Param.h"

class Program;

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
	void addParam(Param* param);
	void addBlock(Block* b);
	void buildIR(CFG* cfg);

private:

	/* ------------ Attributs ------------ */
	std::string name;
	std::vector<Param*> params;
	Block* block;
	int retType;
};

