//
// Created by Shantay Budding on 4/13/21.
//

#include "Zombie.hpp"

Zombie::Zombie( std::string name, std::string type ) :
													_name(name), _type(type) {
	std::cout << "Zombie " << this->_name << " is born." << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Rip zombie " << this->_name << "." << std::endl;
	return;
}


void 	Zombie::announce() {

	std::cout << "<" << this->_name << " ("
		<< this->_type << ")> MMMMM!!! FRESH MEAT!!!" << std::endl;
}