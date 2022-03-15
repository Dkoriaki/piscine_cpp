/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:03 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 15:41:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
//	Construcors / Desctructor
*/

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "AAnimal has been created."  << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal make sound" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (_type);
}

void	AAnimal::TalkAboutHisIdeas(void) const
{
	std::cout << "I dont have any Ideas" << std::endl;
}

/*
//	Operators
*/

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}