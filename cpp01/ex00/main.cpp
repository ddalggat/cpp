#include "Zombie.hpp"

int main() {
	Zombie* zombie = newZombie("Hayreddin");
	zombie->announce();
	randomChump("Aruj");
	delete zombie;
	return 0;
}