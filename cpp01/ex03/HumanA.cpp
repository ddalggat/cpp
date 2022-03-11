#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA() {
	this->name = "";
	this->weapon = NULL;
}

void HumanA::attack() {
	std::cout << this->name << " has attacked by " << this->weapon->getType() << std::endl;
}