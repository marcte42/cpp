/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@42.stud.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:42:53 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/05/06 14:56:54 by mterkhoy         ###   ########.fr       */
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

	int index = -1;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (forms[i].compare(form) == 0)
			index = i;
	switch (index)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default :
			throw(Intern::FormNotFoundException());
	}
}

const char	*Intern::FormNotFoundException::what() const throw() {
	return ("Form not found");
}
