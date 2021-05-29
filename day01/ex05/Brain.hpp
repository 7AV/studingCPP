//
// Created by Shantay Budding on 4/14/21.
//

#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
	int 	_icq;
public:
	Brain( void );
	~Brain( void );
	const	std::string		identify( void ) const;
	static int 		set_Icq( void );
};


#endif //EX05_BRAIN_HPP
