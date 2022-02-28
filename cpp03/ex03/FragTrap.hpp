#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap		&operator=(const FragTrap &rhs);

		void			highFivesGuys();
};

std::ostream			&operator<<(std::ostream &ofs, const FragTrap &rhs);

#endif
