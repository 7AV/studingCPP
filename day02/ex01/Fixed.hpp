//
// Created by Shantay Budding on 4/15/21.
//
// clang++ -Wall -Wextra -Werror -g -fsanitize=address --std=c++98 *.cpp

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed( void );
	Fixed( int const rawBits );
	Fixed( float const rawBits );
	~Fixed( void );

	Fixed( Fixed const &src );
	Fixed	&operator=(Fixed const &rhs);

	int 	getRawBits( void ) const;
	void 	setRawBits( int const RawBits );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

private:
	int 				_rawBits;
	int static const	_width = 8;

};

std::ostream 	&operator<<( std::ostream &o, Fixed const &rhs);

#endif //EX01_FIXED_HPP
