#include "Fixed.hpp"

int const	Fixed::_fractBits = 8;

Fixed::Fixed() : _rawBits(0) {

}

Fixed::Fixed(int const rawBits) : _rawBits(rawBits << _fractBits) {

}

Fixed::Fixed(float const rawBits) : _rawBits(roundf(rawBits * (1 << _fractBits))) {

}

Fixed::Fixed( const Fixed & src ) {

	*this = src;
}

Fixed::~Fixed() {

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

Fixed&	Fixed::min(Fixed& first, Fixed& second) {

	return (first <= second ? first : second);
}

Fixed const & Fixed::min(Fixed const & first, Fixed const & second) {

	return (first <= second ? first : second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second) {

	return (first >= second ? first : second);
}

Fixed const &	Fixed::max(Fixed const & first, Fixed const & second) {

	return (first >= second ? first : second);
}

Fixed&	Fixed::operator=( Fixed const & rhs )
{

	this->_rawBits = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( Fixed const & rhs ) const {
	
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {
	
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {
	
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {
	
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++() {

	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed&	Fixed::operator--() {

	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed tmp(*this);
	operator--();
	return (tmp);
}

bool	Fixed::operator<( Fixed const & rhs ) const {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>( Fixed const & rhs ) const {

	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) const {

	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs ) const {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) const {

	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) const {

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