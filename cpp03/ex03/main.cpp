/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:56:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/13 02:19:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	std::string n1("Jules");
	std::string n2("Mateo");

	std::cout << "DiamondTrap CREATIONS\n" << std::endl;
	DiamondTrap		Jules(n1);
	FragTrap		Mateo(n2);

	std::cout << "\nSTATS\n" << std::endl;
	std::cout << "Name["<< Jules.getName() << "] AttackDamage[" << Jules.getAttackDamage() << "] HitPoints[" << Jules.getHitPoints()
				<< "] EnergyPoints[" << Jules.getEnergyPoints() << "]" << std::endl;
	std::cout << "Name["<< Mateo.getName() << "] AttackDamage[" << Mateo.getAttackDamage() << "] HitPoints[" << Mateo.getHitPoints()
				<< "] EnergyPoints[" << Mateo.getEnergyPoints() << "]" << std::endl;

	
	std::cout << "\nACTIONS\n" << std::endl;
	
	Jules.whoAmI();
	Jules.highFivesGuys();
	Jules.guardGate();
	Jules.attack(n2);
	Mateo.takeDamage(Jules.getAttackDamage());
	Jules.beRepaired(100);
	Mateo.attack(n1);
	Jules.takeDamage(Mateo.getAttackDamage());
	Jules.takeDamage(53453455);
	Jules.beRepaired(123456789);

	std::cout << std::endl;


	
	return (0);
}