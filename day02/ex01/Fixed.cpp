//
// Created by Shantay Budding on 4/15/21.
//

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( int const rawBits )
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (rawBits << Fixed::_width);
}

Fixed::Fixed( float const rawBits )
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(rawBits * (1 << Fixed::_width));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = src.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

void 	Fixed::setRawBits( int const RawBits )
{
	this->_rawBits = RawBits;
}

int 	Fixed::getRawBits() const
{
	return (this->_rawBits);
}

std::ostream 	&operator<<( std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

float 	Fixed::toFloat() const
{
	return ((float) this->_rawBits / (float)(1 << Fixed::_width));
}

int 	Fixed::toInt() const
{
	return (this->_rawBits >> Fixed::_width);
}