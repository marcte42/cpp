#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound() const;

private:
	Brain *_brain;
};

#endif
