#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>
# include <map>

class Karen
{
	typedef void (Karen::*fptr)();

	public:

		Karen();
		~Karen();

		void complain( std::string level );

	private:

		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);

		std::map<std::string, fptr> _log;

};

#endif /* *********************************************************** KAREN_H */
