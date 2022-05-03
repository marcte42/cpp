/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@stud.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:40:33 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/05/03 20:42:30 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Intern
{
	public:

		Intern();
		Intern(Intern const &src);
		virtual ~Intern();

		Intern	&operator=(Intern const &rhs);
		Form	*makeForm(const std::string form, const std::string target) const;

		struct		FormNotFoundException: public std::exception {
			virtual const char	*what() const throw();
		};

	private:
};

#endif
