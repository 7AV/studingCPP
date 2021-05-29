//
// Created by Shantay Budding on 4/20/21.
//

#include "AMateria.hpp"

AMateria::AMateria(){this->_xp = 0;}

AMateria::AMateria(std::string const &type) : _type(type)
{
//	AMateria::setName();
	this->_xp = 0;
}

//void 	AMateria::setName()
//{
//	this->_name = _type;
//	for (int i = 0; i < _name.length(); i++)
//		_name[i] = std::tolower(_name[i]);
//}

AMateria::AMateria(AMateria &src) : _type(src._type)
{
	this->_xp = src._xp;
	*this = src;
}

AMateria::~AMateria()
{

}

AMateria	&AMateria::operator=(AMateria const &src)
{
//	this->_name = src._name;
	this->_xp = src._xp;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int 		AMateria::getXP() const
{
	return (this->_xp);
}

void 		AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}