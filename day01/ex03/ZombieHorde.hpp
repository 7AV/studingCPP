//
// Created by Shantay Budding on 4/13/21.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	Zombie		*_horde;
	int			_cnt;

public:
	ZombieHorde( int cnt );
	~ZombieHorde( void );
	std::string		randomName();
	void 			announce( void );
};


#endif //EX03_ZOMBIEHORDE_HPP
