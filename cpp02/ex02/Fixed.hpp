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

		int 					getRawBits( void ) const;
		void 					setRawBits( int const raw );

		float 					toFloat( void ) const;
		int 					toInt( void ) const;
		static Fixed &			min(Fixed& first, Fixed& second);
		static Fixed const &	min(Fixed const & first, Fixed const & second);
		static Fixed &			max(Fixed& first, Fixed& second);
		static Fixed const &	max(Fixed const & first, Fixed const & second);

		Fixed&					operator=( Fixed const & rhs );

		Fixed					operator-( Fixed const & rhs ) const;
		Fixed					operator*( Fixed const & rhs ) const;
		Fixed					operator+( Fixed const & rhs ) const;
		Fixed					operator/( Fixed const & rhs ) const;
		Fixed&					operator++();
		Fixed					operator++(int);
		Fixed&					operator--();
		Fixed					operator--(int);

		bool					operator<( Fixed const & rhs ) const;
		bool					operator>( Fixed const & rhs ) const;
		bool					operator>=( Fixed const & rhs ) const;
		bool					operator<=( Fixed const & rhs ) const;
		bool					operator==( Fixed const & rhs ) const;
		bool					operator!=( Fixed const & rhs ) const;

	private:
		int					_rawBits;
		static int const	_fractBits;
};

std::ostream&	operator<<( std::ostream &ofs, Fixed const & rhs );

#endif
