#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " left the ring !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return *this;
}

std::string	ScavTrap::getName() const {
	return this->_name;
}

int	ScavTrap::getHitPoints() const {
	return this->_hitPoints;
}

int	ScavTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int	ScavTrap::getAttackDamage() const {
	return this->_attackDamage;
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
void	ScavTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << "ScavTrap " << this->_name << " repaired " << amount << " hitpoints!" << std::endl;
}