//
// Created by Shantay Budding on 4/17/21.
//

#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP

#include <istream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	void 			_randomChallenge(std::string const &target);

public:
	ScavTrap(std::string name );
	ScavTrap(ScavTrap &src );
	ScavTrap &operator=(ScavTrap &rhs );
	~ScavTrap();

	void 	challengeNewcomer(std::string const &target);
};


#endif //EX02_SCAVTRAP_HPP
