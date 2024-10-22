#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cerr << _name << " Zombie constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cerr << _name << " Zombie destructor called" << std::endl;
}

void Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
