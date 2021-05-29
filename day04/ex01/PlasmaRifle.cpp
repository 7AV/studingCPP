//
// Created by Shantay Budding on 4/18/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void )
	: AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle &src )
{
	*this = src;
}

PlasmaRifle		&PlasmaRifle::operator=( PlasmaRifle const &src )
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
	return;
}

void		PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}