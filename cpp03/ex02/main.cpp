/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:56:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/11 23:10:43 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	std::cout << "\nConstructors\n--------------" << std::endl;
	FragTrap	Pierre("Pierre");
	std::cout << "name = " << Pierre.getName() <<
		" Hitpoints = " << Pierre.getHitPoints() <<
		" Energypoints = " << Pierre.getEnergyPoints() <<
		" Attack dmg = " << Pierre.getAttackDamage() << std::endl << std::endl;

	ClapTrap	Albert("Albert");
	std::cout << "name = " << Albert.getName() <<
		" Hitpoints = " << Albert.getHitPoints() <<
		" Energypoints = " << Albert.getEnergyPoints() <<
		" Attack dmg = " << Albert.getAttackDamage() << std::endl << std::endl;

	std::cout << "Actions\n--------------" << std::endl;
	Albert.beRepaired(50);
	Pierre.attack("Albert");
	Albert.takeDamage(Pierre.getAttackDamage());
	Albert.attack("Pierre");
	Pierre.takeDamage(Albert.getAttackDamage());
	Pierre.takeDamage(58);
	Pierre.highFivesGuys();
	Pierre.beRepaired(100);
	Pierre.takeDamage(1000);
	
	std::cout << "\nDestructors\n--------------" << std::endl;
	
	return (0);
}