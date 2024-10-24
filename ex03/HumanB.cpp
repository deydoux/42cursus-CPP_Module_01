#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
	std::cerr << _name << " HumanB constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cerr << _name << " HumanB destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() const {
	std::cout << _name << " attacks with ";
	if (_weapon)
		std::cout << "their " << _weapon->getType() << std::endl;
	else
		std::cout << "out weapon" << std::endl;
}
