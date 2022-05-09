#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	(void)rhs;
	return *this;
}

const std::string &AMateria::getType() const
{
	return _type;
}