//
// Created by Shantay Budding on 4/14/21.
//

#include "HumanB.hpp"

HumanB::HumanB( const std::string &name) : _name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void 	HumanB::setWeapon(Weapon &wep)
{
	this->_wep = &wep;
}

void 	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_wep->getType() <<
	std::endl;
}