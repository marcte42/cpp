#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		DiamondTrap		&operator=(const DiamondTrap &rhs);

		void			whoAmI();
		using			ScavTrap::attack;
};

std::ostream			&operator<<(std::ostream &ofs, const DiamondTrap &rhs);

#endif
