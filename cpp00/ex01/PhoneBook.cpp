/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 00:05:46 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->_nb_contacts = 0;
	std::cout << "Welcome to Phonebook !" << std::endl;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "Thanks for using Phonebook !" << std::endl;
}

void	PhoneBook::run(void) {

	std::string cmd;

	while (true) {
		std::cout << "ADD / SEARCH / EXIT : ";
		std::getline(std::cin, cmd);
		if (std::cin.bad() || std::cin.eof())
			break ;
		if (cmd.compare("ADD") == 0)
			this->_addEntry();
		else if (cmd.compare("SEARCH") == 0)
			this->_search();
		else if (cmd.compare("EXIT") == 0)
			return ;
	}
}

void	PhoneBook::_addEntry(void) {

	if (this->_nb_contacts >= 8) {
		std::cout << "You reached the hard limit of 8 contacts..." << std::endl;
		return ;
	}
	if (this->_contacts[this->_nb_contacts].init()) {
		std::cout << "Contact was successfully added !" << std::endl;
		this->_nb_contacts++;
	}
	else {
		std::cin.ignore();
		std::cout << "Error while adding new contact !" << std::endl;
	}
}

void	PhoneBook::_showEntries(void) {

	std::cout << "-----INDEX--FIRSTNAME---LASTNAME---NICKNAME" << std::endl;
	for (int i = 0; i < this->_nb_contacts; i++) {
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		this->_contacts[i].display_grid();
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;
}

void	PhoneBook::_search(void) {

	int	index;
	if (this->_nb_contacts == 0) {
		std::cout << "No contacts yet !" << std::endl;
		return ;
	}
	_showEntries();
	std::cout << "Enter contact index : ";
	std::cin >> index;
	if (std::cin.bad() || std::cin.eof() || std::cin.fail() || index < 1 || index > this->_nb_contacts) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	this->_contacts[index - 1].display_full();
}
