#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	_type = rhs._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound !" << std::endl;
}
