/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:09:19 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/13 02:22:00 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Null_clap_name"), _name("Null")
{
	std::cout << "DiamondTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::ret_EP();
	this->_AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , _name(name)
{
	std::cout << "DiamondTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::ret_EP();
	this->_AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap Copy constructor called -> " << _name << "has been created" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name  << " has been destructed." << std::endl;
}

/*
//	Member functions
*/

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "WhoAmI DiamondTrap my name is [" << this->_name << "] and my ClapTrap name is [" << ClapTrap::_name << "]" << std::endl;
}

/*
//	Operators
*/

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_HitPoints = rhs._HitPoints;
		_EnergyPoints = rhs._EnergyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}