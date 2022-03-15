/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:08 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 16:27:25 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


/*
//	Construcors / Desctructor
*/

Cat::Cat(void)
{
	_brain = new Brain;
	this->_type = "cat";
	std::cout << "Cat has been created."  << std::endl;
}

Cat::Cat(Cat const & src) : Animal(), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called" << this->_type << "]" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuuuu" << std::endl;
}

/*
//	Operators
*/

Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}