/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:49:02 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 13:10:19 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() : _indexIdea(0)
{
	for (int i(0); i < 100; i++)
	{
		_ideas[i] = "";
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
** --------------------------------- FUNCTIONS --------------------------------
*/

void	Brain::setIdea(std::string const idea)
{
	this->_ideas[_indexIdea++] = idea;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */