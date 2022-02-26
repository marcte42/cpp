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

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " entered Gatekeeping mode!" << std::endl;
}