#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <errno.h>
#include <limits>

enum
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR
};

class Converter
{
public:
	Converter(const std::string _arg);
	~Converter();
	Converter &operator=(const Converter &rhs);

	const std::string getArg() const;
	void printAll(void) const;

private:
	Converter();
	Converter(const Converter &src);
	
	std::string _arg;
	int _type;

	int getType() const;
	bool validType() const;
	void printCharType(void) const;
	void printIntType(void) const;
	void printFloatType(void) const;
	void printDoubleType(void) const;
};

#endif
