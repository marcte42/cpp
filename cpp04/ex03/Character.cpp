#include "Character.hpp"

Character::Character() : _name("Character")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	_name = src.getName();
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

const std::string &Character::getName() const
{
	return _name;
}

Character &Character::operator=(const Character &rhs)
{
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx] = NULL; // Besoin de trouver un moyen de garder le pointeur en memoire afin de delete a la fin
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
