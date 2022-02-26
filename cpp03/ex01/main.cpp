#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap jim("Jim");

	jim.attack("Robert");
	jim.takeDamage(7);
	jim.takeDamage(7);
	jim.guardGate();
	jim.attack("Robert");
	jim.beRepaired(20);
	jim.attack("Robert");
	jim.attack("Robert");

	return 0;
}
