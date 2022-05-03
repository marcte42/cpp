#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

	Bureaucrat marc("Marc", 1);
	marc.signForm(*rrf);
	marc.executeForm(*rrf);
	return (0);
}
