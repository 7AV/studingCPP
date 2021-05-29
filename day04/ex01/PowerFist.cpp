//
// Created by Shantay Budding on 4/18/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist( void )
		: AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist( PowerFist &src )
{
	*this = src;
}

PowerFist		&PowerFist::operator=( PowerFist const &src )
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

PowerFist::~PowerFist()
{
	return;
}

void		PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}