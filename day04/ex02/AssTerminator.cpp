//
// Created by Shantay Budding on 4/19/21.
//

#include "AssTerminator.hpp"

AssTerminator::AssTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssTerminator::AssTerminator(AssTerminator const &src)
{
	std::cout << "* teleports from space *" << std::endl;
	(void)src;
}

AssTerminator &AssTerminator::operator=(AssTerminator &)
{
	return (*this);
}

AssTerminator::~AssTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine* 	AssTerminator::clone() const
{
	AssTerminator	*src = new AssTerminator(*this);
	return(src);
}

void 			AssTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 			AssTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void 			AssTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}