//
// Created by Shantay Budding on 4/19/21.
//

#include "FatMan.hpp"

FatMan::FatMan( void )
		: AWeapon("Fat Man", 19, 450)
{
	return;
}

FatMan::FatMan( FatMan &src )
{
	*this = src;
}

FatMan		&FatMan::operator=( FatMan & )
{
	return (*this);
}

FatMan::~FatMan()
{
	return;
}

void		FatMan::attack( void ) const
{
	std::cout << "* BIG BOOOOM *" << std::endl;
}