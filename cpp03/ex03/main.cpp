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
	ClapTrap cleo("Cleo");
	std::cout << "-------------------------------" << std::endl;
	ScavTrap sergei("Sergei");
	std::cout << "-------------------------------" << std::endl;
	FragTrap flore("Flore");
	std::cout << "-------------------------------" << std::endl;
	DiamondTrap dandy("Dandy");
	std::cout << "-------------------------------" << std::endl;

	dandy.attack("Robert");
	dandy.takeDamage(7);
	dandy.takeDamage(7);
	dandy.guardGate();
	dandy.attack("Robert");
	dandy.beRepaired(20);
	dandy.attack("Robert");
	dandy.attack("Robert");
	dandy.whoAmI();

	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(cleo);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(sergei);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(flore);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(dandy);

	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	ft_checker_ref(cleo);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(sergei);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(flore);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(dandy);
	std::cout << "-------------------------------" << std::endl;

	return 0;
}
