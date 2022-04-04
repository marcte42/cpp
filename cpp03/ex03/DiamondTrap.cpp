#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " entered the ring !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " entered the ring ! " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " left the ring !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	ClapTrap::_name = rhs._name + "_clap_name";
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << this->_name << std::endl;
}
