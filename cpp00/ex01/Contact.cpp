/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/04/22 18:36:37 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

bool Contact::init(void) {

	std::cout << std::setw(20) << "First Name : ";
	std::getline(std::cin, _first_name);
	if (std::cin.bad() || std::cin.eof() || _first_name.empty())
		return (false);
	std::cout << std::setw(20) << "Last Name : ";
	std::getline(std::cin, _last_name);
	if (std::cin.bad() || std::cin.eof() || _last_name.empty())
		return (false);
	std::cout << std::setw(20) << "Nickame : ";
	std::getline(std::cin, _nickname);
	if (std::cin.bad() || std::cin.eof() || _nickname.empty())
		return (false);
	std::cout << std::setw(20) << "Phone Number : ";
	std::getline(std::cin, _phone_number);
	if (std::cin.bad() || std::cin.eof() || _phone_number.empty())
		return (false);
	std::cout << std::setw(20) << "Darkest Secret : ";
	std::getline(std::cin, _darkest_secret);
	if (std::cin.bad() || std::cin.eof() || _darkest_secret.empty())
		return (false);
	return (true);
}

void Contact::display_full(void) {

	std::cout << std::endl << "-------------------------------------------" << std::endl;
	std::cout << std::setw(20) << "First Name: " << _first_name << std::endl;
	std::cout << std::setw(20) << "Last Name: " << _last_name << std::endl;
	std::cout << std::setw(20) << "Nickname: " << _nickname << std::endl;
	std::cout << std::setw(20) << "Phone Number: " << _phone_number << std::endl;
	std::cout << std::setw(20) << "Darkest Secret: " << _darkest_secret << std::endl;
	std::cout << "-------------------------------------------" << std::endl << std::endl;
}

void Contact::display_grid(void) {

	std::string str;

	if (_first_name.size() > 10)
		std::cout << _first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << _first_name.substr(0, 10);
	std::cout << "|";
	if (_last_name.size() > 10)
		std::cout << _last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << _last_name.substr(0, 10);
	std::cout << "|";
	if (_nickname.size() > 10)
		std::cout << _nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << _nickname.substr(0, 10);
}
