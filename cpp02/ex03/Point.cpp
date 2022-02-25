#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
}

Point::Point(const Fixed &fixedX, const Fixed &fixedY) : _x(fixedX), _y(fixedY) {

}

Point::Point(const Point &src) : _x(src._x), _y(src._y) {
	
}

Point::~Point() {
}

Point&	Point::operator=(Point const & rhs) {

	return (*this);
}

Fixed Point::getX() const {

	return (this->_x.toFloat());
}

Fixed Point::getY() const {

	return (this->_y.toFloat());
}

std::ostream&	operator<<( std::ostream &ofs, Point const & rhs ) {

	return (ofs);
}

