/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 00:20:08 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/22 00:58:25 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
//	Construcors / Desctructor
*/

Intern::Intern(void)
{
	std::cout << "Intern has been created" << std::endl;
	this->_formName[0] = "ShrubberyCreationForm";
	this->_formName[1] = "RobotomyRequestForm";
	this->_formName[2] = "PresidentialPardonForm";
}

Intern::Intern(Intern const & src)
{
	*this = src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern has been destroyed" << std::endl;
}

/*
//	Exceptions
*/

const char * Intern::WrongFormNameException::what() const throw() 
{
	return("Intern WrongFormNameException");
}

/*
//	Member Functions
*/

AForm*	Intern::makeForm(std::string form, std::string target)
{
	AForm	*(Intern::*ptrfct[3])(std::string) = {&Intern::_createShrubberyForm, &Intern::_createRobotomyForm, &Intern::_createPresidentialForm};
	std::string	fctName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
	{
		if (fctName[i] == form)
		{
			std::cout << "Intern create " << form << std::endl;
			return ((this->*(ptrfct[i]))(target));
		}
	}
	throw Intern::WrongFormNameException();
	return (NULL);
}

AForm*	Intern::_createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::_createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::_createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

/*
//	Operators
*/

Intern &	Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern assignement operator called" << std::endl;
	(void)rhs;
	return (*this);
}
