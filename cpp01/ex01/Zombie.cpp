/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:08:39 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 21:06:51 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () : _name("")
{
}

Zombie::Zombie (std::string name) : _name(name)
{
}

Zombie::~Zombie ()
{
	std::cout << this->_name << ": Died perfectly" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	Zombie::_name = name;
}
