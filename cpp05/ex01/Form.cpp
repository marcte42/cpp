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

#include "Form.hpp"

Form::Form() : _name("Form"), _signed(0), _signGrade(150), _executeGrade(150) {}

Form::Form(const std::string name, int signGrade, int executeGrade) : _name(name), _signed(0), _signGrade(signGrade), _executeGrade(executeGrade) {
	if (_signGrade <= 0 || _executeGrade <= 0)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) {
	*this = src;
}

Form::~Form() {}

Form	&Form::operator=(Form const &rhs) {
	(std::string)_name = rhs._name;
	_signed = rhs.getSigned();
	_signGrade = rhs.getSignGrade();
	_executeGrade = rhs.getExecuteGrade();
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::string	Form::getName() const {
	return (_name);
}

bool Form::getSigned() const {
	return (_signed);
}

int	Form::getSignGrade() const {
	return (_signGrade);
}

int	Form::getExecuteGrade() const {
	return (_executeGrade);
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &ofs, Form const &rhs) {

	ofs << rhs.getName() << " form (signGrade: " << rhs.getSignGrade() << ", executeGrade: " << rhs.getExecuteGrade() << ")";
	return (ofs);
}
