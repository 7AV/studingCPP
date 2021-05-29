//
// Created by Shantay Budding on 4/15/21.
//
// clang++ -Wall -Wextra -Werror -g -fsanitize=address --std=c++98 *.cpp

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed( void );
	~Fixed( void );

	Fixed( Fixed const &src );
	Fixed	&operator=(Fixed const &rhs);

	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );

private:
	int 				_rawBits;
	int static const	_width = 8;
};

std::ostream 	&operator<<( std::ostream &o, Fixed const &rhs);

#endif //EX00_FIXED_HPP
