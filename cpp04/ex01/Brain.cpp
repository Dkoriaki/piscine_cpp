/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:49:02 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:22 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i(0); i < 100; i++)
	{
		_ideas[i] = "I'm hungry";
	}
	std::cout << "Brain has been created." << std::endl;
}

Brain::Brain( Brain const & src )
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain has been destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i(0); i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Brain::printIdeas(void)
{
	for (int i(0); i < 100; i++)
		std::cout << "idea[" << i << "] = " << this->_ideas[i] << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */