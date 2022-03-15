/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:03 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 12:33:27 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
//	Construcors / Desctructor
*/

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal has been created."  << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

/*
//	Operators
*/

Animal &	Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}