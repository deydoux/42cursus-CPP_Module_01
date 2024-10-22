#include "Harl.hpp"

void Harl::_debug() const {
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl << std::endl;
}

void Harl::_info() const {
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl << std::endl;
}

void Harl::_warning() const {
	std::cout << "[ WARNING ]"
		<< std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
		<< std::endl << std::endl;
}

void Harl::_error() const {
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

Harl::Harl() {
	std::cerr << "Harl constructor called" << std::endl;
}

Harl::~Harl() {
	std::cerr << "Harl destructor called" << std::endl;
}

void Harl::complain(std::string level) const {
	std::string const levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t i = 0;
	while (levels[i] != level && i < 4)
		i++;

	switch (i) {
		case 0:
			_debug();
		case 1:
			_info();
		case 2:
			_warning();
		case 3:
			_error();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
