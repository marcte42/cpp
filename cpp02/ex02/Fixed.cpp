#include "Fixed.hpp"

int const	Fixed::_fractBits = 8;

Fixed::Fixed() : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const rawBits) : _rawBits(rawBits << _fractBits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const rawBits) : _rawBits(roundf(rawBits * (1 << _fractBits))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const & rhs )
{

	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {

	return (this->_rawBits);
}

void Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const {

	return (float(_rawBits) / (1 << _fractBits));
}

int 	Fixed::toInt( void ) const {

	return (this->_rawBits >> this->_fractBits);
}

bool	Fixed::operator<( Fixed const & rhs ) {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>( Fixed const & rhs ) {

	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) {

	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs ) {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) {

	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) {

	return (this->getRawBits() != rhs.getRawBits());
}

std::ostream&	operator<<( std::ostream &ofs, Fixed const & rhs ) {

	ofs << rhs.toFloat();
	return (ofs);
}



// 0 0 0 0 0 0 0 0    0 0 0 0 0 0 0 0    0 0 0 0 0 0 0 0  .  0 0 0 0 0 0 2 0

// 3 2 1 0 -1 -2
// 8 4 2 1  

//  -4 + 0 + 1 + 1/2
// 0 1 0 1 1