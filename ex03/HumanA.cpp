#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cerr << _name << " HumanA constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cerr << _name << " HumanA destructor called" << std::endl;
}

void HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
