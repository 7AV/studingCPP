//
// Created by Shantay Budding on 4/18/21.
//

#include "Peon.hpp"

Peon::Peon( void )
{
	return;
}

Peon::Peon(std::string name)
		: Victim(name)
{
	std::cout << "Zog zog." <<
			  std::endl;
}

Peon::Peon( Peon &src )
{
	*this = src;
}

Peon &Peon::operator=( Peon &rhs )
{
	this->_name = rhs._name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void 	Peon::sayHello( void )
{
	std::cout << "I'm " << this->_name <<
			  " and i like otters!" << std::endl;
}

void 	Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony!"
			  << std::endl;
}