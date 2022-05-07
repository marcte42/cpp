#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	*this = src;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	delete _brain;
	_brain = new Brain();
	*_brain = *rhs._brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound !" << std::endl;
}
