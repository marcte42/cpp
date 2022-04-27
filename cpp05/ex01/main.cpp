#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b1("Marc", 13);
	Bureaucrat b2("Marc", 130);
	Bureaucrat b3("Marc", 1);
	Form f1("C25", 15, 3);
	Form f2("C23", 1, 3);
	Form f3("C21", 150, 3);

	std::cout << std::endl << "----------------------------" << std::endl << std::endl;

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;
	b1.signForm(f1);

	std::cout << std::endl << "----------------------------" << std::endl << std::endl;

	std::cout << b2 << std::endl;
	std::cout << f2 << std::endl;
	b2.signForm(f2);

	std::cout << std::endl << "----------------------------" << std::endl << std::endl;
	try {
		Form f_bad("Bad", -1, 155);
	}
	catch (std::exception &e) {
		std::cout << "Exception raised: " << e.what() << std::endl;
	}
	std::cout << std::endl << "----------------------------" << std::endl << std::endl;
	try {
		Form f_bad("Bad", 1, 155);
	}
	catch (std::exception &e) {
		std::cout << "Exception raised: " << e.what() << std::endl;
	}
	std::cout << std::endl << "----------------------------" << std::endl << std::endl;
	return (0);
}
