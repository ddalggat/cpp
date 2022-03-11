#include "Zombie.hpp"

int main(void) {
	int N = 55;
	Zombie *Horde = zombieHorde(N, "Zombiezzzz");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
	return 0;
}

