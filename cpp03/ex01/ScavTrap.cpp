#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " left the ring !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack anymore..." << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " entered Gatekeeping mode!" << std::endl;
}
