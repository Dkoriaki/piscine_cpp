/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:12 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/16 00:00:20 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


/*
//	Construcors / Desctructor
*/

Dog::Dog(void) : AAnimal()
{
	_brain = new Brain;
	this->_type = "Dog";
	std::cout << "Dog has been created."  << std::endl;
}

Dog::Dog(Dog const & src) : AAnimal(), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog has been destructed." << std::endl;
}

/*
//	Member Functions
*/

void	Dog::makeSound(void) const
{
	std::cout << "Wouaaaffff" << std::endl;
}

void	Dog::TalkAboutHisIdeas(void) const
{
	this->_brain->printIdeas();
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