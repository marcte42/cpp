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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 145, 137, "") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 145, 137, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->setSigned(rhs.getSigned());
	return *this;
}

void	RobotomyRequestForm::action(Bureaucrat const & executor) const {
	std::cout << "Robotomy Request executed by " << executor.getName() << std::endl;
}
