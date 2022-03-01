#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

void	ft_checker_copy(ClapTrap trap) {
	trap.attack("checker");
}

void	ft_checker_ref(ClapTrap &trap) {
	trap.attack("checker");
}

int main()
{
	std::cout << "-------------------------------" << std::endl;
	DiamondTrap tim("Tim");
	std::cout << "-------------------------------" << std::endl;

	tim.attack("Robert");
	tim.takeDamage(7);
	tim.takeDamage(7);
	tim.guardGate();
	tim.attack("Robert");
	tim.beRepaired(20);
	tim.attack("Robert");
	tim.attack("Robert");
	tim.whoAmI();
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(tim);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(tim);
	std::cout << "-------------------------------" << std::endl;

	return 0;
}
