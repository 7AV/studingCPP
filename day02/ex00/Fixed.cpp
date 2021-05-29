//
// Created by Shantay Budding on 4/15/21.
//

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
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

void 	Fixed::setRawBits(const int raw)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = raw;
}

int 	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

std::ostream 	&operator<<( std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return o;
}
