/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:47:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/14 17:04:02 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
//	Construcors / Desctructor
*/

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal has been created."  << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

/*
//	Operators
*/

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}