#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:

		Fixed();
		Fixed(int const rawBits);
		Fixed(float const rawBits);
		Fixed(Fixed const & src);
		~Fixed();

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );

		float 	toFloat( void ) const;
		int 	toInt( void ) const;

		Fixed&	operator=( Fixed const & rhs );

	private:
		int					_rawBits;
		static int const	_fractBits;
};

std::ostream&	operator<<( std::ostream &ofs, Fixed const & rhs );

#endif
