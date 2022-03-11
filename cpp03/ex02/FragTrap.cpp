/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:52:25 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/11 23:00:16 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap Copy constructor called -> " << _name << "has been created" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name  << " has been destructed." << std::endl;
}

/*
//	Member functions
*/

void	FragTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDamage
		<< " points of damage! EnergyPoint: " << this->_EnergyPoints << std::endl;
	}
	else
	{
		std::cout << "FragTrap" << this->_name << "has no more energy to attack" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name  << " propose a high five" << std::endl;
}

/*
//	Operators
*/

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_HitPoints = rhs._HitPoints;
		_EnergyPoints = rhs._EnergyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}