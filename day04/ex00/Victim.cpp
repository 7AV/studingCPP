//
// Created by Shantay Budding on 4/18/21.
//

#include "Victim.hpp"

Victim::Victim()
{
	return;
}

Victim::Victim(std::string name)
		: _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just "
															 "appeared!" <<
			  std::endl;
}

Victim::Victim(Victim &src)
{
	*this = src;
}

Victim &Victim::operator=( Victim &rhs )
{
	this->_name = rhs._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name  <<
	" just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName( void )
{
	return (this->_name);
}

void 	Victim::sayHello( void )
{
	std::cout << "I'm " << this->_name <<
			  " and i like otters!" << std::endl;
}

void 	Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!"
	<< std::endl;
}

std::ostream &operator<<( std::ostream &o, Victim &rhs)
{
	o << "I'm " << rhs.getName() <<
				" and i like otters!" << std::endl;
	return o;
}