/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:13:59 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/21 00:42:13 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::init(void) {
	std::cout << "First Name : ";
	std::getline(std::cin, this->first_name);

	std::cout << "Last Name : ";
	std::getline(std::cin, this->last_name);

	std::cout << "Nickame : ";
	std::getline(std::cin, this->nickname);

	std::cout << "Phone Number : ";
	std::getline(std::cin, this->phone_number);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::display(void) {
	std::cout << std::setw(10) << this->first_name;
	std::cout << "|";
	std::cout << std::setw(10) << this->last_name;
	std::cout << "|";
	std::cout << std::setw(10) << this->nickname;
}
