#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Animal = operator called" << std::endl;
	_type = rhs._type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal sound !" << std::endl;
}
