/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:40:33 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/27 19:43:41 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();

		struct	GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};

		struct	GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream&	operator<<(std::ostream &ofs, Bureaucrat const &rhs);

#endif
