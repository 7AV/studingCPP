//
// Created by Shantay Budding on 4/13/21.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	std::string		_name;

public:
	Pony( std::string name );
	~Pony( void );

	void 	eat( void );
	void 	sleep( void );
	void 	think( void );
};


#endif //EX00_PONY_HPP
