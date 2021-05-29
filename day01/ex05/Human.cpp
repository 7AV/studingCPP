//
// Created by Shantay Budding on 4/14/21.
//

#include "Human.hpp"
#include "Brain.hpp"

Human::Human( void )
{
	return;
}

Human::~Human( void )
{
	return;
}

const Brain		&Human::getBrain( void )
{
	return(this->_brain);
}

const std::string 	Human::identify() const
{
	return(this->_brain.identify());
}
