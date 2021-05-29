//
// Created by Shantay Budding on 4/20/21.
//

#include "Cure.hpp"

//Cure::Cure(){}

Cure::Cure() : AMateria("cure")
{
	this->_name = "cure";
}

Cure::Cure(Cure &src) : AMateria(src.getType())
{
	*this = src;
}

Cure::~Cure()
{

}

Cure	&Cure::operator=(Cure const &src)
{
	this->_xp = src._xp;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria	*dst = new Cure;
	return (dst);
}

void 		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}