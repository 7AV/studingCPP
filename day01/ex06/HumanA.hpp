//
// Created by Shantay Budding on 4/14/21.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	std::string 	_name;
	const Weapon			&_wep;
public:
	HumanA( const std::string name, const Weapon &wep );
	~HumanA();
	void 	attack() const;
};


#endif //EX06_HUMANA_HPP
