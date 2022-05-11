#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* ice = src->createMateria("ice");
	me->equip(ice);
	AMateria* tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(100, *bob);

	std::cout << std::endl;

	me->unequip(0);
	delete ice;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->unequip(100);
	me->use(100, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
