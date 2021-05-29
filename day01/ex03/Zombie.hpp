//
// Created by Shantay Budding on 4/13/21.
//

#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	std::string		_type;
	std::string		_name;
public:
	Zombie( void );
	~Zombie( void );
	void 	setName( std::string name);
	void 	announce( void );
};


#endif //EX03_ZOMBIE_HPP
