#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
	this->damage = 20;
	this->energyPoints = 50;
	this->hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& s) : ClapTrap(s){}

ScavTrap& ScavTrap::operator= (const ScavTrap& s) {
	ClapTrap::operator= (s);
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->getName() << " is destructed !" << std::endl;
}


void ScavTrap::attack(const std::string& target){
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
		return ;
	std::cout << "ScavTrap " << name << " attacks " << target ;
	std::cout << ", causing " << damage << " points of damage!" << std::endl;
	energyPoints--;
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << name <<  " took damage " << amount << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " died !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " is being repaired" << std::endl;
	this->setHitPoints( this->getHitPoints() + amount);
}


void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}