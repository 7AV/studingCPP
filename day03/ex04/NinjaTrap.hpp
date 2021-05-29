//
// Created by Shantay Budding on 4/17/21.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap( std::string name);
	NinjaTrap( NinjaTrap &src);
	NinjaTrap &operator=( NinjaTrap & );
	~NinjaTrap();

	void 	ninjaShoebox( ClapTrap & );
	void 	ninjaShoebox( FragTrap & );
	void 	ninjaShoebox( ScavTrap & );
	void 	ninjaShoebox( NinjaTrap & );

};


#endif //EX03_NINJATRAP_HPP
