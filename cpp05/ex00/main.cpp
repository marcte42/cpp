#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat marc("Marc", 13);
	Bureaucrat john(marc);
	Bureaucrat boris("Boris", 26);

	std::cout << marc << std::endl;
	std::cout << john << std::endl;
	std::cout << boris << std::endl;
	boris = marc;
	std::cout << boris << std::endl;
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
