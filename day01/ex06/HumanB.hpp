//
// Created by Shantay Budding on 4/14/21.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	std::string 	_name;
	Weapon			*_wep;
public:
	HumanB( const std::string &name );
	~HumanB();
	void 	setWeapon( Weapon &wep );
	void 	attack();
};


#endif //EX06_HUMANB_HPP
