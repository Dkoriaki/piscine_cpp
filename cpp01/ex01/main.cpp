/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:08:41 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 21:21:45 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int		main(int ac, char **av)
{
	int			N(3);
	std::string	name = "Marc";

	Zombie*		horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}