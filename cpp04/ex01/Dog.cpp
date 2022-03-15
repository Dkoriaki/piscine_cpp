/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:12 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 12:34:19 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


/*
//	Construcors / Desctructor
*/

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog has been created."  << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << this->_type << "]" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	Dog::makeSound(void) const
{
	std::cout << "Wouaaaffff" << std::endl;
}

/*
//	Operators
*/

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}