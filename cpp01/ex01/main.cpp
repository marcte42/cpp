/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:34:28 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 22:34:11 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	horde = zombieHorde(7, "Smith");

	for (int i = 0; i < 7; i++)
		horde[i].announce();

	delete [] horde;

	Zombie*	badHorde = zombieHorde(-12, "Jack");

	return (0);
}
