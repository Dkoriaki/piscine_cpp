/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:59 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 10:19:48 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
//	Construcors / Desctructor
*/

Bureaucrat::Bureaucrat(void) : _name("Null"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << getName() << ", Bureaucrat grade [" << getGrade() << "] has been created" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << getName() << ", Bureaucrat has been killed *o*" << std::endl;
}

/*
//	Exceptions
*/

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{
	return("Bureaucrat GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() 
{
	return("Bureaucrat GradeTooLowException");
}

/*
//	Member Functions
*/

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Congratulations " << this->getName()
		<< " you are upgraded ! [" << this->getGrade() + 1 
		<< "->" << this->getGrade() << "]" << std::endl;
	
}

void	Bureaucrat::gradeDown(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->getName()
		<< " I have bad news, you are downgraded[" << this->getGrade() - 1 
		<< "->" << this->getGrade() << "]" << std::endl;
}

void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}

/*
//	Operators
*/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return(*this);
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}

