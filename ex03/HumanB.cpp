#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cerr << this->_name << " HumanB constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cerr << this->_name << " HumanB destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() const {
	std::cout << this->_name << " attacks with ";
	if (this->_weapon)
		std::cout << "their " << this->_weapon->getType() << std::endl;
	else
		std::cout << "out weapon" << std::endl;
}
