/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:56:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/04 00:07:45 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	Yves("Yves");
	ClapTrap	Jack("Jack");

	Yves.attack("Jack");
	Jack.takeDamage(Yves.getAttackDamage());
	Yves.takeDamage(42);
	Yves.takeDamage(-42);
	Yves.beRepaired(45);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	Jack.beRepaired(1);
	
	return (0);
}