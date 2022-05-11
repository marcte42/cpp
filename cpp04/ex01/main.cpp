#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *tabAnimal[100];

	for (int i = 0; i < 5; i++)
		tabAnimal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		tabAnimal[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete tabAnimal[i];

	{
		std::cout << "--------------------------------------" << std::endl;

		Cat *i = new Cat();

		std::cout << "--------------------------------------" << std::endl;

		Cat *j = new Cat(*i);

		std::cout << "--------------------------------------" << std::endl;

		j->makeSound();

		std::cout << "--------------------------------------" << std::endl;

		delete i;
		delete j;

		std::cout << "--------------------------------------" << std::endl;

		Cat *k = new Cat();
		std::cout << std::endl;
		Cat *l = new Cat();
		std::cout << std::endl;
		*l = *k;
		std::cout << std::endl;
		l->makeSound();
		std::cout << std::endl;
		delete k;
		delete l;
	}

	return 0;
}
