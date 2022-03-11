#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = NULL;
	if (N < 1)
		std::cout << "Where're Zombiezzz" << std::endl;
	else {
		horde = new Zombie[N];
		for (int i = 0; i < N; i++) {
			horde[i].nameSet(name);
		}
	}
	return horde;
}
