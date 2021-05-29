//
// Created by Shantay Budding on 4/19/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant( SuperMutant &src )
{
	*this = src;
}

SuperMutant &SuperMutant::operator=( SuperMutant const &rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}

void 	SuperMutant::takeDamage( int dmg )
{
	dmg -= 3;
	if (dmg >= 0)
		this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}