/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:40:33 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/28 13:06:44 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int signGrade, int executeGrade, const std::string target);
		Form(Form const &src);
		virtual ~Form();

		virtual Form 		&operator=(const Form &rhs);

		void			beSigned(const Bureaucrat &bureaucrat);
		void			execute(const Bureaucrat & executor) const;
		virtual void	action(const Bureaucrat & executor) const = 0;

		std::string	getName() const;
		bool		getSigned() const;
		void		setSigned(bool sign);
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		std::string	getTarget() const;

		struct		GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};

		struct		GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		int					_signGrade;
		int					_executeGrade;
		const std::string	_target;
};

std::ostream&	operator<<(std::ostream &ofs, Form const &rhs);

#endif
