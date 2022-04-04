#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}
