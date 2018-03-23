#pragma once
#include <string>
namespace Type{
	enum Type { CHAR , INT32_T , INT64_T };
}


class Var
{
public:
	/* ---- Constructors / Destructor ---- */
	Var(Type::Type type, std::string name, int64_t value);
	virtual ~Var();

	/* ------------- Methods ------------- */

	Type::Type getType() const;

	const std::string &getName() const;

	int getSize() const;

	int64_t getValue() const;

	virtual void print();

protected:
	/* ------------ Attributs ------------ */
	Type::Type type;
	std::string name;
	int size = 0;
	int64_t value = 0;
};

