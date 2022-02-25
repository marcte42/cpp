#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		ScavTrap		&operator=(const ScavTrap &rhs);

		void 			attack(const std::string &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

		std::string		getName() const;
		int				getHitPoints() const;
		int				getEnergyPoints() const;
		int				getAttackDamage() const;
};

std::ostream			&operator<<(std::ostream &ofs, const ScavTrap &rhs);

#endif