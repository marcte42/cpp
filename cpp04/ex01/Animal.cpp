#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal = operator called" << std::endl;
	_type = rhs._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound !" << std::endl;
}
