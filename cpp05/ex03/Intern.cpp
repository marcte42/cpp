/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@stud.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:42:53 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/05/03 20:43:36 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern::~Intern() {}

Intern	&Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(const std::string form, const std::string target) const {

	if (form.compare("shrubbery creation") == 0) {
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	if (form.compare("robotomy request") == 0) {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	if (form.compare("presidential pardon") == 0) {
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	throw(Intern::FormNotFoundException());
}

const char	*Intern::FormNotFoundException::what() const throw() {
	return ("Form not found");
}
