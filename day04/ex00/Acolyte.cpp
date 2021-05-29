//
// Created by Shantay Budding on 4/18/21.
//

#include "Acolyte.hpp"

Acolyte::Acolyte( void )
{
	return;
}

Acolyte::Acolyte(std::string name)
		: Victim(name)
{
	std::cout << "Yes, master." <<
			  std::endl;
}

Acolyte::Acolyte( Acolyte &src )
{
	*this = src;
}

Acolyte &Acolyte::operator=( Acolyte &rhs )
{
	this->_name = rhs._name;
	return (*this);
}

Acolyte::~Acolyte()
{
	std::cout << "* died *" << std::endl;
}

void 	Acolyte::sayHello( void )
{
	std::cout << "I'm " << this->_name <<
			  " and i like Ner'zhul!" << std::endl;
}

void 	Acolyte::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a shade!"
			  << std::endl;
}