#include "Zombie.hpp"

int main(void) {
	int zozosSize = 21;
	Zombie *zozos = zombieHorde(zozosSize, "zozo");

	for (int i = 0; i < zozosSize; i++)
		zozos[i].announce();

	delete [] zozos;
}
