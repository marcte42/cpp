#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " entered the ring !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " entered the ring !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " left the ring !" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return *this;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}

int	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << this->_name << " can't attack anymore..." << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << this->_name << " attacks " << target
		<<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << this->_name << " repaired " << amount << " hitpoints!" << std::endl;
}