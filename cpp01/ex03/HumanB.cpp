/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:46:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/26 15:31:20 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << this->_name << " dont have any weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
