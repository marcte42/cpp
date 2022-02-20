/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/21 00:43:37 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->nb_contacts = 0;
	std::cout << "Welcome to the Phonebook !" << std::endl;
	std::cout << "Usage: ADD / SEARCH / EXIT" << std::endl;
}

void	PhoneBook::run(void) {
	std::string cmd;

	do {
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			this->addEntry();
		else if (cmd.compare("SEARCH") == 0)
			this->search();
	} while (cmd.compare("EXIT"));
}

void	PhoneBook::showEntries(void) {
	for (int i = 0; i < this->nb_contacts; i++) {
		this->contacts[i].display();
	}
}

void	PhoneBook::addEntry(void)
{
	if (this->nb_contacts >= 8)
	{
		std::cout << "You reached the hard limit of 8 contacts..." << std::endl;
		return ;
	}
	this->contacts[this->nb_contacts].init();
	std::cout << "Contact was successfully added !" << std::endl;
	this->nb_contacts++;
}

void	PhoneBook::search(void)
{
	for (int i = 0; i < this->nb_contacts; i++) {
		std::cout << std::setw(10) << i;
		std::cout << "|";
		this->contacts[i].display();
		std::cout << std::endl;
	}
}
