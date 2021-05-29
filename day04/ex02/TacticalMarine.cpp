//
// Created by Shantay Budding on 4/19/21.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	(void)src;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine &)
{
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* 	TacticalMarine::clone() const
{
	TacticalMarine	*src = new TacticalMarine(*this);
	return(src);
}

void 			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void 			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}