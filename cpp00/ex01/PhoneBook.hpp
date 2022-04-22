/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:56:18 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/22 18:30:54 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <limits>
# include "Contact.hpp"

# define MAX_CONTACTS 3

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	run(void);

	private:
		Contact _contacts[8];
		int		_nb_contacts;
		int		_save_index;

		void	_addEntry(void);
		void	_search(void);
		void	_showEntries(void);
};

#endif
