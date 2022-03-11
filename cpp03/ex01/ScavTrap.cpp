/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:14:12 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/11 22:09:38 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " has been created." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap Copy constructor called -> " << _name << "has been created" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name  << " has been destructed." << std::endl;
}

/*
//	Member functions
*/

void	ScavTrap::attack(const std::string& target)
{
	if (this->_EnergyPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_AttackDamage
		<< " points of damage! EnergyPoint: " << this->_EnergyPoints << std::endl;
	}
	else
	{
		std::cout << "ScavTrap" << this->_name << "has no more energy to attack" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0 || amount >= 2147483648)
	{
		std::cout << "ScavTrap " << this->_name << " take damage causing 0 points of damage. Total HP: " << this->_HitPoints << std::endl;
		return ;
	}
	if (amount >= this->_HitPoints)
	{
		this->_HitPoints = 0;
		std::cout << "ScavTrap " << this->_name << " take damage causing " << amount << " points of damage. Total HP: " << this->_HitPoints << std::endl;
		return ;
	}
	else
	{
		this->_HitPoints -= amount;
		std::cout << "ScavTrap " << this->_name << " take damage causing " << amount << " points of damage. Total HP: " << this->_HitPoints << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no more energy to repaired" << std::endl;
		return ;
	}
	if (amount <= 0 || amount >= 2147483648)
	{
		std::cout << "ScavTrap " << this->_name << " earned 0 Hit Points. Total HP: " << this->_HitPoints << std::endl;
		return ;
	}
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << "ScavTrap " << this->_name << " earned " << amount << " Hit Points. Total HP: " << this->_HitPoints << " EnergyPoints: " << this->_EnergyPoints << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name  << " has entered Gate keeper mode" << std::endl;
}

/*
//	Operators
*/

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_HitPoints = rhs._HitPoints;
		_EnergyPoints = rhs._EnergyPoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}