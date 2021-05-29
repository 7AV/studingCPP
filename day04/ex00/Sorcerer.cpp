//
// Created by Shantay Budding on 4/18/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void )
{
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" <<
	std::endl;
}

Sorcerer::Sorcerer(Sorcerer &src)
{
	*this = src;
}

Sorcerer &Sorcerer::operator=( Sorcerer &rhs )
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. " <<
	"Consequences never be the same!" << std::endl;
}

std::string Sorcerer::getName( void )
{
	return (this->_name);
}

std::string Sorcerer::getTitle( void )
{
	return (this->_title);
}

void 	Sorcerer::sayHello( void )
{
	std::cout << "I am " << this->_name << ", " << this->_title <<
	", and i like ponies!" << std::endl;
}

void 	Sorcerer::polymorph( Victim const &src )
{
	src.getPolymorphed();
}

std::ostream &operator<<( std::ostream &o, Sorcerer  &rhs )
{
	o << "I am "  << rhs.getName() << ", " << rhs.getTitle() <<
			  ", and i like ponies!" << std::endl;
	return o;
}