#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat marc("Marc", 13);

	std::cout << marc << std::endl;
	try {
		Bureaucrat tony("Tony", -10);
	}
	catch (std::exception & e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

	std::cout << "Code still running..." << std::endl;

	try {
		Bureaucrat will("Will", 150);
		will.decrementGrade();
	}
	catch (std::exception & e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }
	return (0);
}
