#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cerr << this->_type << " Weapon constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cerr << this->_type << " Weapon destructor called" << std::endl;
}

std::string const &Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}
