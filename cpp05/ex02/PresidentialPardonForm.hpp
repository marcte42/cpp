/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:40:33 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/28 13:08:12 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm();

		virtual PresidentialPardonForm 		&operator=(const PresidentialPardonForm &rhs);

		virtual void	action(Bureaucrat const & executor) const;
};

#endif
