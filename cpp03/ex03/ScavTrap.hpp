#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		ScavTrap		&operator=(const ScavTrap &rhs);

		void 			attack(const std::string &target);
		void			guardGate();
};

std::ostream			&operator<<(std::ostream &ofs, const ScavTrap &rhs);

#endif
