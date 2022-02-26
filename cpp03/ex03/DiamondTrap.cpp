#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage =30;
	std::cout << "DiamondTrap " << this->_name << " entered the ring !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) { 
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " entered the ring !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " left the ring !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << this->_name << std::endl;
}