/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/22 18:35:01 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nb_contacts(0), _save_index(0) {
	
	std::cout << "Welcome to Phonebook !" << std::endl;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::run(void) {

	std::string cmd;

	while (true) {
		std::cout << "ADD / SEARCH / EXIT : ";
		std::getline(std::cin, cmd);
		if (std::cin.bad() || std::cin.eof())
			break ;
		if (cmd.compare("ADD") == 0)
			_addEntry();
		else if (cmd.compare("SEARCH") == 0)
			_search();
		else if (cmd.compare("EXIT") == 0)
			return ;
	}
}

void	PhoneBook::_addEntry(void) {

	if (_contacts[_save_index].init()) {
		std::cout << "Contact was successfully added !" << std::endl;
		if (_nb_contacts < MAX_CONTACTS)
			_nb_contacts++;
		_save_index++;
		_save_index %= MAX_CONTACTS;
	}
	else {
		std::cout << std::endl << "Error while adding new contact !" << std::endl;
	}
}

void	PhoneBook::_showEntries(void) {

	std::cout << std::endl << "-----INDEX--FIRSTNAME---LASTNAME---NICKNAME" << std::endl;
	for (int i = 0; i < _nb_contacts; i++) {
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		_contacts[i].display_grid();
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl << std::endl;
}

void	PhoneBook::_search(void) {

	int	index;
	if (_nb_contacts == 0) {
		std::cout << "No contacts yet !" << std::endl;
		return ;
	}
	_showEntries();
	std::cout << "Enter contact index : ";
	std::cin >> index;
	if (std::cin.bad() || std::cin.eof() || std::cin.fail() || index < 1 || index > _nb_contacts) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	_contacts[index - 1].display_full();
}
