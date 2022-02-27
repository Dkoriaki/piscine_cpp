/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:50:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 18:22:58 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	std::cout << "creation of the first zombie(Paul) on the stack in the main" << std::endl;
	Zombie	first_zombie("Paul");
	first_zombie.announce();
	std::cout << std::endl << "creation of the 2nd zombie(Yves) on the heap in the fonction newZombie" << std::endl;
	Zombie	*second_zombie = newZombie("Yves");
	second_zombie->announce();
	std::cout << std::endl << "creation of the 3rd zombie(Gilles) on the stack in the fonction randomChump" << std::endl;
	randomChump("Gilles");
	std::cout << "End" << std::endl;
	delete second_zombie;
	return (0);
}
