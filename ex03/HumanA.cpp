#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cerr << this->_name << " HumanA constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cerr << this->_name << " HumanA destructor called" << std::endl;
}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
