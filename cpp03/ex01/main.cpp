/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:56:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/11 17:34:28 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	michel("Michel");
	ClapTrap	Yves("Yves");

	std::cout << "name = " << michel.getName() <<
		" Hitpoints = " << michel.getHitPoints() <<
		" Energypoints = " << michel.getEnergyPoints() <<
		" Attack dmg = " << michel.getAttackDamage() << std::endl;

	std::cout << "name = " << Yves.getName() <<
		" Hitpoints = " << Yves.getHitPoints() <<
		" Energypoints = " << Yves.getEnergyPoints() <<
		" Attack dmg = " << Yves.getAttackDamage() << std::endl;
	
	return (0);
}