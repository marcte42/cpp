#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	public:

		Point();
		Point(float const x, float const y);
		Point(const Fixed &fixedX, const Fixed &fixedY);
		Point(Point const & src);
		~Point();

		Point&	operator=(Point const & rhs);

		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const		_x;
		Fixed const		_y;

};

std::ostream&	operator<<( std::ostream &ofs, Point const & rhs );

#endif
