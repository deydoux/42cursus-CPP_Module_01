#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cerr << this->_name << " Zombie constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cerr << this->_name << " Zombie destructor called" << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
