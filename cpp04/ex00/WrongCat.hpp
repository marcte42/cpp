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
	virtual ~WrongCat();

	WrongCat &operator=(WrongCat const &rhs);

	void makeSound() const;

protected:
	std::string _type;
};

#endif
