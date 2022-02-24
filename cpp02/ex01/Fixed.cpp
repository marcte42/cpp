#include "Fixed.hpp"

int const	Fixed::_bitsCount = 8;

Fixed::Fixed() : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const rawBits) : _rawBits(rawBits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const rawBits) : _rawBits(rawBits) {

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

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const {

}
int 	Fixed::toInt( void ) const {

}
