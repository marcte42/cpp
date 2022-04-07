#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal *tabAnimal[100];

	for (int i = 0; i < 50; i++)
		tabAnimal[i] = new Dog();
	for (int i = 50; i < 100; i++)
		tabAnimal[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete tabAnimal[i];
	return 0;
}
