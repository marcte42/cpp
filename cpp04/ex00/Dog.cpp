#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound !" << std::endl;
}
