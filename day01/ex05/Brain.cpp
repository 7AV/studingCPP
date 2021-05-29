//
// Created by Shantay Budding on 4/14/21.
//

#include "Brain.hpp"

Brain::Brain( void )
{
	this->_icq = set_Icq();
	return;
}

Brain::~Brain( void )
{
	return;
}

int 	Brain::set_Icq()
{
	std::srand(time(NULL));
	return(std::rand() % 60 + 60);
}

const std::string 	Brain::identify() const
{
	long 				adr = (long)this;
	std::stringstream	str;

	str << "0x" << std::uppercase << std::hex << adr;

	return (str.str());
}