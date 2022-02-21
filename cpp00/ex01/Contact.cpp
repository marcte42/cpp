/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 00:03:13 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

bool Contact::init(void) {

	std::cout << std::setw(20) << "First Name : ";
	std::getline(std::cin, this->_first_name);
	if (std::cin.bad() || std::cin.eof() || this->_first_name.empty())
		return (false);
	std::cout << std::setw(20) << "Last Name : ";
	std::getline(std::cin, this->_last_name);
	if (std::cin.bad() || std::cin.eof() || this->_last_name.empty())
		return (false);
	std::cout << std::setw(20) << "Nickame : ";
	std::getline(std::cin, this->_nickname);
	if (std::cin.bad() || std::cin.eof() || this->_nickname.empty())
		return (false);
	std::cout << std::setw(20) << "Phone Number : ";
	std::getline(std::cin, this->_phone_number);
	if (std::cin.bad() || std::cin.eof() || this->_phone_number.empty())
		return (false);
	std::cout << std::setw(20) << "Darkest Secret : ";
	std::getline(std::cin, this->_darkest_secret);
	if (std::cin.bad() || std::cin.eof() || this->_darkest_secret.empty())
		return (false);
	return (true);
}

void Contact::display_full(void) {

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(20) << "First Name: " << this->_first_name << std::endl;
	std::cout << std::setw(20) << "Last Name: " << this->_last_name << std::endl;
	std::cout << std::setw(20) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(20) << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << std::setw(20) << "Darkest Secret: " << this->_darkest_secret << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
}

void Contact::display_grid(void) {

	std::string str;

	if (this->_first_name.size() > 10)
		std::cout << this->_first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_first_name.substr(0, 10);
	std::cout << "|";
	if (this->_last_name.size() > 10)
		std::cout << this->_last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_last_name.substr(0, 10);
	std::cout << "|";
	if (this->_nickname.size() > 10)
		std::cout << this->_nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_nickname.substr(0, 10);
}
