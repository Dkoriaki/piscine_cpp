/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:29:26 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 10:19:09 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
//	Construcors / Desctructor
*/

Form::Form(void) : _name("RandomForm"), _signed(false), _gradeSign(150), _gradeExecute(150)
{
		std::cout << getName() << ", Form has been created with a Sign grade of " << getGradeSign() << std::endl;
}

Form::Form(std::string name, int gradeSign) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(150)
{
	std::cout << getName() << ", Form has been created with a Sign grade of " << getGradeSign() << std::endl;
	if (gradeSign < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src)
{
	*this = src;
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << getName() << " Form has been destroyed" << std::endl;
}

/*
//	Exceptions
*/

const char * Form::GradeTooHighException::what() const throw() 
{
	return("Form GradeTooHighException");
}

const char * Form::GradeTooLowException::what() const throw() 
{
	return("Form GradeTooLowException");
}


/*
//	Member Functions
*/

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int		Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

/*
//	Operators
*/

Form &	Form::operator=(Form const & rhs)
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

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << rhs.getName();
	if (rhs.getSigned())
		o << " Form is signed. ";
	else
		o << " Form is not signed. ";
	o << "Sign grade = " << rhs.getGradeSign() << " Execute grade = " << rhs.getGradeExecute() << std::endl;
	return (o);
}