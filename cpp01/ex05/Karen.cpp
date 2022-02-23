#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen() {

	this->_log["DEBUG"] = &Karen::debug;
	this->_log["INFO"] = &Karen::info;
	this->_log["WARNING"] = &Karen::warning;
	this->_log["ERROR"] = &Karen::error;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void Karen::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error( void ) {

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level ) {

	if (this->_log.find(level) != this->_log.end())
		(this->*_log[level])();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
