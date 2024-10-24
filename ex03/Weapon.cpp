#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	std::cerr << _type << " Weapon constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cerr << _type << " Weapon destructor called" << std::endl;
}

const std::string &Weapon::getType() const {
	return (_type);
}

void Weapon::setType(std::string type) {
	_type = type;
}
