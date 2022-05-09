#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
	*_brain = *src._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog = operator called" << std::endl;
	*_brain = *rhs._brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound !" << std::endl;
}
