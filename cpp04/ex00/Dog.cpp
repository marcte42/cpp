#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog( const Dog & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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

void Dog::makeSound() const {
	std::cout << "Bark bark !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
