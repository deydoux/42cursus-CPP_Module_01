#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cerr << this->_name << " Zombie constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cerr << this->_name << " Zombie destructor called" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
