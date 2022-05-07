#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *tabAnimal[100];

	for (int i = 0; i < 50; i++)
		tabAnimal[i] = new Dog();
	for (int i = 50; i < 100; i++)
		tabAnimal[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete tabAnimal[i];

	std::cout << "--------------------------------------" << std::endl;

	{
		Cat i;
		Cat j;

		i = j;
	}

	std::cout << "--------------------------------------" << std::endl;

	{
		Animal *i = new Cat();
		Animal *j = new Dog();

		*i = *j;

		i->makeSound();

		delete i;
		delete j;
	}

	return 0;
}
