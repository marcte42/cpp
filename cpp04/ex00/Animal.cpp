#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
}

Animal::Animal( const Animal & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const {
	std::cout << "Animal sound !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const {
	return this->type;
}

/* ************************************************************************** */
