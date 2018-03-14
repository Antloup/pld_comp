#pragma once

#include <vector>
#include "Param.h"
#include "Block.h"

class Function
{
public:
	/* ---- Constructors / Destructor ---- */
	Function();
	~Function();

	/* ------------- Methods ------------- */

private:

	/* ------------ Attributs ------------ */
	std::vector<Param>* params;
	Block* block;
};

