//
// Created by Shantay Budding on 4/20/21.
//

#include "Ice.hpp"

//Ice::Ice(){}

Ice::Ice() : AMateria("ice")
{
	this->_name = "ice";
}

Ice::Ice(Ice &src) : AMateria(src.getType())
{
	*this = src;
}

Ice::~Ice()
{

}

Ice	&Ice::operator=(Ice const &src)
{
	this->_xp = src._xp;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria	*dst = new Ice;
	return (dst);
}

void 		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}