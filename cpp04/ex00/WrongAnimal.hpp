#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();

	void makeSound() const;

protected:
	std::string _type;

private:
	WrongAnimal &operator=(WrongAnimal const &rhs);
};

#endif
