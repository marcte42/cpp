#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
	*_brain = *src._brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat = operator called" << std::endl;
	*_brain = *rhs._brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound !" << std::endl;
}
