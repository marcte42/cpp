#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	ft_checker_copy(ClapTrap trap) {
	std::cout << "||||||||||" << std::endl;
	trap.attack("checker");
	std::cout << "||||||||||" << std::endl;
}

void	ft_checker_ref(ClapTrap &trap) {
	std::cout << "||||||||||" << std::endl;
	trap.attack("checker");
	std::cout << "||||||||||" << std::endl;
}

int main()
{
	ClapTrap tim("Tim");
	ScavTrap jim("Jim");

	jim.attack("Robert");
	jim.takeDamage(7);
	jim.takeDamage(7);
	jim.guardGate();
	jim.attack("Robert");
	jim.beRepaired(20);
	jim.attack("Robert");
	jim.attack("Robert");
	ft_checker_copy(jim);
	ft_checker_ref(jim);

	return 0;
}
