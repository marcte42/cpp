/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:42:53 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/27 20:24:17 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	this->setSigned(rhs.getSigned());
	return *this;
}

void	ShrubberyCreationForm::action(Bureaucrat const & executor) const {
	std::cout << "Shrubbery Request executed by " << executor.getName() << std::endl;
}
