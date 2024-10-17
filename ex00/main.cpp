#include "Zombie.hpp"

int main(void) {
	Zombie *zozo = newZombie("zozo");

	zozo->announce();
	randomChump("Beyonce");

	delete zozo;
}
