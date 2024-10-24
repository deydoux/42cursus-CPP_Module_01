#include "Zombie.hpp"

int main(void) {
	Zombie *shane = newZombie("Shane");

	shane->announce();
	randomChump("Hershel");

	delete shane;
}
