#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat marc("Marc", 1);
	ShrubberyCreationForm s1("test");
	RobotomyRequestForm s2("test");
	PresidentialPardonForm s3("test");
	marc.signForm(s1);
	marc.signForm(s2);
	marc.signForm(s3);
	marc.executeForm(s1);
	marc.executeForm(s2);
	marc.executeForm(s3);
	return (0);
}
