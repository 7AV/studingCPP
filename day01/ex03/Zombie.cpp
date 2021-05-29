//
// Created by Shantay Budding on 4/13/21.
//

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	this->_type = "default_zombie";
	std::cout << "Zombie is born." << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Rip zombie " << this->_name << "." << std::endl;
	return;
}

void 	Zombie::setName(std::string name) {
	this->_name = name;
}

void 	Zombie::announce() {

	std::cout << "<" << this->_name << " ("
			  << this->_type << ")> MMMMM!!! FRESH MEAT!!!" << std::endl;
}