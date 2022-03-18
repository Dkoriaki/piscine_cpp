/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:29:26 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 15:54:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
//	Construcors / Desctructor
*/

AForm::AForm(void) : _name("RandomForm"), _signed(false), _gradeSign(150), _gradeExecute(150)
{
	std::cout << getName() << ", Form has been created with a Sign grade of " << getGradeSign() << " and an Execute grade of " << getGradeExecute() << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << getName() << ", Form has been created with a Sign grade of " << getGradeSign() << " and an Execute grade of " << getGradeExecute() << std::endl;
	if (gradeSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src)
{
	*this = src;
	std::cout << "Form copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << getName() << " Form has been destroyed" << std::endl;
}

/*
//	Exceptions
*/

const char * AForm::GradeTooHighException::what() const throw() 
{
	return("Form GradeTooHighException");
}

const char * AForm::GradeTooLowException::what() const throw() 
{
	return("Form GradeTooLowException");
}

const char * AForm::UnsignedException::what() const throw() 
{
	return("Form UnsignedException");
}


/*
//	Member Functions
*/

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int		AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::UnsignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
}

/*
//	Operators
*/

AForm &	AForm::operator=(AForm const & rhs)
{
	std::cout << "Form assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_signed = rhs.getSigned();
		this->_gradeSign = rhs.getGradeSign();
		this->_gradeExecute = rhs.getGradeExecute();
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName();
	if (rhs.getSigned())
		o << " Form is signed. ";
	else
		o << " Form is not signed. ";
	o << "Sign grade = " << rhs.getGradeSign() << " Execute grade = " << rhs.getGradeExecute();
	return (o);
}