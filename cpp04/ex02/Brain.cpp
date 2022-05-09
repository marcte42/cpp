#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain = operator called" << std::endl;
	std::cout << "Brain copying..." << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return *this;
}
