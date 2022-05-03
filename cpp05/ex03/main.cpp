#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat marc("Marc", 1);
		Intern someRandomIntern;
		Form* rrf;
	
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		marc.signForm(*rrf);
		marc.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
