#include "Harl.hpp"

void Harl::_debug() const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info() const {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void Harl::_warning() const {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
		<< std::endl;
}

void Harl::_error() const {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {
	std::cerr << "Harl constructor called" << std::endl;
}

Harl::~Harl() {
	std::cerr << "Harl destructor called" << std::endl;
}

void Harl::complain(std::string level) const {
	std::string const levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (size_t i = 0; i < 4; i++)
		if (levels[i] == level)
			return ((this->*funcs[i])());

	std::cout << "Invalid complaint level" << std::endl;
}
