//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string		_name;
	std::string 	_title;
	Sorcerer();
public:
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer &src );
	Sorcerer &operator=( Sorcerer & );
	~Sorcerer();

	std::string		getName( void );
	std::string		getTitle( void );
	void 	sayHello( void );
	void 	polymorph( Victim const & );
};

std::ostream &operator<<( std::ostream &o, Sorcerer &rhs );


#endif //EX00_SORCERER_HPP
