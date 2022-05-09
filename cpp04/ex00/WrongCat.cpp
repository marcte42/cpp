#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound !" << std::endl;
}
