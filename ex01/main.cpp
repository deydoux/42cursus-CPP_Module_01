#include "Zombie.hpp"

int main(void) {
	int zozos_size = 21;
	Zombie *zozos = zombieHorde(zozos_size, "zozo");

	for (int i = 0; i < zozos_size; i++)
		zozos[i].announce();

	delete[] zozos;
}
