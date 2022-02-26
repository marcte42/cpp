#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage =200;
	std::cout << "ScavTrap " << this->_name << " entered the ring !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { 
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 200;
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

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " entered Gatekeeping mode!" << std::endl;
}