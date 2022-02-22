/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:34:28 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 22:44:52 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {

	std::string		var	= "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << &var << " " << stringPTR << " " << &stringREF << std::endl;
	std::cout << var << " " << *stringPTR << " " << stringREF << std::endl;
	return (0);
}
