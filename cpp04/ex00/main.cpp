#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete i;
	delete j;

	// const WrongAnimal *k = new WrongAnimal();
	// const WrongAnimal *l = new WrongCat();

	// k->makeSound();
	// l->makeSound();

	// delete k;
	// delete l;

	return 0;
}
