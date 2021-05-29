//
// Created by Shantay Budding on 4/14/21.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human
{
	const Brain		_brain;
public:
	Human( void );
	~Human( void );
	const Brain 		&getBrain( void );
	const std::string 	identify( void ) const;
};


#endif //EX05_HUMAN_HPP
