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

void	FragTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " can't attack anymore..." << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target
		<<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << "FragTrap " << this->_name << " repaired " << amount << " hitpoints!" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " high five guys! No ? No one ?" << std::endl;
}