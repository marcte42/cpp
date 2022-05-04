#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <errno.h>
# include <limits>

# define CHAR	1
# define INT	2
# define FLOAT	3
# define DOUBLE	4

class Converter {
	public:
		Converter(const std::string _arg);
    	~Converter();
    	Converter &operator=(const Converter &rhs);
	
		const std::string	getArg() const;

	private:
		Converter();
    	Converter(const Converter &src);
		
		std::string			_arg;
		int					_type;
		
		int					getType() const;
		bool				validType() const;
};

#endif