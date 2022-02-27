/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:45:27 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/26 13:48:35 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) 
{
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}