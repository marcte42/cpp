#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	virtual void makeSound() const;

protected:
	std::string _type;

private:
	Animal &operator=(Animal const &rhs);
};

#endif
