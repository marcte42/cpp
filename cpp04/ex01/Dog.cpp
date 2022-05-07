#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	*this = src;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	_type = rhs._type;
	delete _brain;
	_brain = new Brain();
	*_brain = *rhs._brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound !" << std::endl;
}
