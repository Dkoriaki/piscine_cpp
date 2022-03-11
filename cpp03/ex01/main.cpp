/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:56:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/11 22:31:25 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	std::cout << "\nConstructors\n--------------" << std::endl;
	ScavTrap	michel("Michel");
	std::cout << "name = " << michel.getName() <<
		" Hitpoints = " << michel.getHitPoints() <<
		" Energypoints = " << michel.getEnergyPoints() <<
		" Attack dmg = " << michel.getAttackDamage() << std::endl << std::endl;

	ClapTrap	Yves("Yves");
	std::cout << "name = " << Yves.getName() <<
		" Hitpoints = " << Yves.getHitPoints() <<
		" Energypoints = " << Yves.getEnergyPoints() <<
		" Attack dmg = " << Yves.getAttackDamage() << std::endl << std::endl;

	std::cout << "Actions\n--------------" << std::endl;
	michel.attack("Yves");
	Yves.beRepaired(50);
	Yves.takeDamage(michel.getAttackDamage());
	Yves.attack("michel");
	michel.takeDamage(Yves.getAttackDamage());
	michel.takeDamage(58);
	michel.guardGate();
	michel.beRepaired(100);
	michel.takeDamage(1000);
	
	std::cout << "\nDestructors\n--------------" << std::endl;
	
	return (0);
}