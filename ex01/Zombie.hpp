#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string	_name;
public:
	Zombie(std::string name = "Unamed");
	~Zombie();
	void setName(std::string name);
	void announce() const;
};

Zombie *zombieHorde(int n, std::string name);

#endif
