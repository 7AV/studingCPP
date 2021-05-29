//
// Created by Shantay Budding on 4/13/21.
//

#include "Pony.hpp"

Pony::Pony( std::string name ) : _name(name) {

	std::cout << "Pony " << this->_name << " is born." << std::endl;
}

Pony::~Pony( void ) {

	std::cout << "Pony " << this->_name << " died." << std::endl;
}

void 	Pony::eat()
{
	std::cout << this->_name << " is eating." << std::endl;
}

void 	Pony::sleep()
{
	std::cout << this->_name << " is sleeping." << std::endl;
}

void 	Pony::think()
{
	std::cout << this->_name << " is thinking." << std::endl;
}