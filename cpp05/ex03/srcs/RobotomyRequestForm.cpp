/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:09:32 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/24 11:06:28 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "";
	std::cout << "RobotomyRequestForm has been created with a Sign grade of 72 and execute grade 45" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm has been created with [" << this->getTarget() << "] as target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm has been destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
	if (this != &rhs)
	{
		//this->_name = rhs.getName();
		this->_signed = rhs.getSigned();
		//this->_gradeSign = rhs.getGradeSign();
		//this->_gradeExecute = rhs.getGradeExecute();
		//this->_target = rhs.getTarget();
	}
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		AForm::execute(executor);
		std::cout << "TRAtatatatatatatata zzzzzzzzzz tratatatataa zzzzzzzz (drill sound)" << std::endl;
		srand (time(NULL));
		int	random;
		random = rand() % 2;
		if (random == 1)
			std::cout << this->getTarget () << " has been Robotized" << std::endl;
		else
			std::cout << "Robotization of " << this->getTarget() << " Failed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "It is not possible to execute RobotomyRequestForm cause of " <<  e.what() << '\n';
		throw std::exception();
	}	
}


/* ************************************************************************** */