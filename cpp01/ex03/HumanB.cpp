#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
	this->name = "";
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	if (!this->weapon)
		std::cout << "The weapon is using now" << std::endl;
	else
		std::cout << this->name << " has attacked by " << this->weapon->getType() <<std::endl;
}