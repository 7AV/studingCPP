//
// Created by Shantay Budding on 4/14/21.
//

#include "HumanA.hpp"

HumanA::HumanA( const std::string name, const Weapon &wep) :
_name(name), _wep(wep)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void 	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_wep.getType() <<
	std::endl;
}