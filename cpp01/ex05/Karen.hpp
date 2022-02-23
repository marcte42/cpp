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

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		std::map<std::string, fptr> _log;

};

#endif /* *********************************************************** KAREN_H */
