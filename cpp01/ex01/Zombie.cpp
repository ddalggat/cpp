#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "Zombiezzzz";
}

Zombie::~Zombie() {
	std::cout << name << ":  Minus one" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": For the Hooooorde" << std::endl;
}

void Zombie::nameSet(std::string name) {
	this->name = name;
}