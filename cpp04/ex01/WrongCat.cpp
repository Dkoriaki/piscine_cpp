/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:49:01 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 12:34:32 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


/*
//	Construcors / Desctructor
*/

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat has been created."  << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	std::cout << "WrongCat copy constructor called" << this->_type << "]" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaouuuuuuu" << std::endl;
}

/*
//	Operators
*/

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return(*this);
}