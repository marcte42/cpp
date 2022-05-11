#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *tabAnimal[100];

	for (int i = 0; i < 50; i++)
		tabAnimal[i] = new Dog();
	for (int i = 50; i < 100; i++)
		tabAnimal[i] = new Cat();
	for (int i = 0; i < 100; i++)
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

	// AAnimal *test = new AAnimal();
	// test->makeSound();

	return 0;
}
