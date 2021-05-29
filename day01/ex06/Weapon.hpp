//
// Created by Shantay Budding on 4/14/21.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string		_type;
public:
	Weapon( std::string const type);
	~Weapon();
	const std::string 	&getType() const;
	void 				setType( const std::string type );
};


#endif //EX06_WEAPON_HPP
