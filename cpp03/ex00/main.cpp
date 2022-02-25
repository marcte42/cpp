#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap jim("Jim");

	jim.attack("Robert");
	jim.takeDamage(7);
	jim.takeDamage(7);
	jim.attack("Robert");
	jim.beRepaired(20);
	jim.attack("Robert");
	jim.attack("Robert");

	return 0;
}
