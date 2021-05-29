//
// Created by Shantay Budding on 4/19/21.
//

#include "Deathclaw.hpp"

Deathclaw::Deathclaw() : Enemy(510, "Deathclaw")
{
	std::cout << "* DEATHCLAW AWAKE! *" << std::endl;
}

Deathclaw::~Deathclaw()
{
	std::cout << "* Deathclaw died *" << std::endl;
}

Deathclaw::Deathclaw( Deathclaw &src )
{
	*this = src;
}

Deathclaw &Deathclaw::operator=( Deathclaw const &rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}

void 	Deathclaw::takeDamage( int dmg )
{
	dmg -= 50;
	if (dmg >= 0)
		this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}