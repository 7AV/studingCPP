//
// Created by Shantay Budding on 4/19/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion &src )
{
	*this = src;
}

RadScorpion &RadScorpion::operator=( RadScorpion const &rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}
