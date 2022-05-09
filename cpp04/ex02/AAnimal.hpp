#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
public:
	AAnimal();
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;

protected:
	std::string _type;

private:
	AAnimal &operator=(AAnimal const &rhs);
};

#endif
