//
// Created by Shantay Budding on 4/13/21.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	std::string		_name;
	std::string		_type;
public:
	Zombie( std::string name, std::string type );
	~Zombie( void );
	void 	announce( void );
};


#endif //EX02_ZOMBIE_HPP
