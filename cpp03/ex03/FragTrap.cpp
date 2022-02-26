#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage =30;
	std::cout << "FragTrap " << this->_name << " entered the ring !" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) { 
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " entered the ring !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " left the ring !" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();

	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " high five guys! No ? No one ?" << std::endl;
}