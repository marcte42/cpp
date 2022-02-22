/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:34:28 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 21:47:01 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	heap = newZombie("Alfred");
	heap->announce();

	Zombie	stack;
	stack.setName("Louis");
	stack.announce();
	
	randomChump("Jim");

	delete heap;
	return (0);
}
