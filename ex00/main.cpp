#include "Zombie.hpp"

int main(void) {
	Zombie *zozo = newZombie("Shane");

	zozo->announce();
	randomChump("Hershel");

	delete zozo;
}
