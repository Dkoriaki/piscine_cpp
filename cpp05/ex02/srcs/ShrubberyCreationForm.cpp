/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:09:34 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 15:52:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "";
	std::cout << "ShrubberyCreationForm has been created with a Sign grade of 145 and execute grade 137" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm has been created with [" << this->getTarget() << "] as target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm has been destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_signed = rhs.getSigned();
		this->_gradeSign = rhs.getGradeSign();
		this->_gradeExecute = rhs.getGradeExecute();
		this->_target = rhs.getTarget();
	}
	return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		AForm::execute(executor);
		std::string		outName(this->_target + "_shrubbery");
		std::ofstream outFlux(outName.c_str());
		if (outFlux)
		{
			outFlux << "        ### \\/#|### |/####             ### \\/#|### |/####" << std::endl;
			outFlux << "       ##\\/#/ \\||/##/_/##/_#         ##\\/#/ \\||/##/_/##/_#" << std::endl;
			outFlux << "     ###  \\/###|/ \\/ # ###         ###  \\/###|/ \\/ # ###" << std::endl;
			outFlux << "   ##_\\_#\\_\\## | #/###_/_####   ##_\\_#\\_\\## | #/###_/_####" << std::endl;
			outFlux << "  ## #### # \\ #| /  #### ##/##   ## #### # \\ #| /  #### ##/##" << std::endl;
			outFlux << "   __#_--###`  |{,###---###-~      __#_--###`  |{,###---###-~" << std::endl;
			outFlux << "             \\ }{                           \\ }{" << std::endl;
			outFlux << "              }}{                             }}{" << std::endl;
			outFlux << "              }}{                             }}{" << std::endl;
			outFlux << "              {{}                             {{}" << std::endl;
			outFlux << "        , -=-~{ .-^- _                  , -=-~{ .-^- _" << std::endl;
		}
		else
		{
    		std::cout << "ERROR: Imposible to open output file." << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "It is not possible to execute ShrubberyCreationForm cause of " <<  e.what() << '\n';
		throw std::exception();
	}	
}


/* ************************************************************************** */