//
// Created by Shantay Budding on 4/13/21.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string		_type;

public:
	ZombieEvent( void );
	~ZombieEvent( void );
	void		 		setZombieType( std::string type );
	static std:: string	randomName( void );
	void				randomChump( void );
	Zombie				*newZombie( std::string name );
};


#endif //EX02_ZOMBIEEVENT_HPP
