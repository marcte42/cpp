#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	ClapTrap tim("Tim");
	std::cout << "-------------------------------" << std::endl;
	ScavTrap jim("Jim");
	std::cout << "-------------------------------" << std::endl;
	FragTrap vim("Vim");
	std::cout << "-------------------------------" << std::endl;

	tim.attack("Robert");
	jim.attack("Robert");
	vim.attack("Robert");
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(jim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_copy(vim);
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(tim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(jim);
	std::cout << "-------------------------------" << std::endl;
	ft_checker_ref(vim);
	std::cout << "-------------------------------" << std::endl;

	return 0;
}
