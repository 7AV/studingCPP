//
// Created by Shantay Budding on 4/18/21.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(NULL)
{
	return;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage)
{
	return;
}

AWeapon::AWeapon( AWeapon &src )
{
	*this = src;
}

AWeapon	&AWeapon::operator=( AWeapon const &src )
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apcost = src._apcost;
	return (*this);
}

AWeapon::~AWeapon( void )
{
	return;
}

std::string AWeapon::getName() const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int			AWeapon::getDamage() const
{
	return (this->_damage);
}