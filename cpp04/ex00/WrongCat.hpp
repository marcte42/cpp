#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &src);
	~WrongCat();

	void makeSound() const;

private:
	WrongCat &operator=(WrongCat const &rhs);
};

#endif
