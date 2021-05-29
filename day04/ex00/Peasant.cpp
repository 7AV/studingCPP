//
// Created by Shantay Budding on 4/18/21.
//

#include "Peasant.hpp"

Peasant::Peasant( void )
{
	return;
}

Peasant::Peasant(std::string name)
		: Victim(name)
{
	std::cout << "Ready to work." <<
			  std::endl;
}

Peasant::Peasant( Peasant &src )
{
	*this = src;
}

Peasant &Peasant::operator=( Peasant &rhs )
{
	this->_name = rhs._name;
	return (*this);
}

Peasant::~Peasant()
{
	std::cout << "That's it. I'm dead." << std::endl;
}

void 	Peasant::sayHello( void )
{
	std::cout << "I'm " << this->_name <<
			  " and i like Uther!" << std::endl;
}

void 	Peasant::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a militia!"
			  << std::endl;
}