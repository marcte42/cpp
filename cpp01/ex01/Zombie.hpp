/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:56:18 by mterkhoy          #+#    #+#             */
/*   Updated: 2022/02/22 22:04:47 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:
	std::string _name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif
