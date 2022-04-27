/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:40:33 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/27 21:00:31 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

typedef class Bureaucrat Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int signGrade, int executeGrade);
		Form(Form const &src);
		~Form();

		Form 		&operator=(const Form &rhs);

		void		beSigned(const Bureaucrat &bureaucrat);

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;

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
};

std::ostream&	operator<<(std::ostream &ofs, Form const &rhs);

#endif
