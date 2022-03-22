/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/22 17:20:47 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	std::cout << "\e[1;35m\nConstructors\e[0m" << std::endl;
	Intern	intern;
	Bureaucrat	b1("b1", 1);
	Bureaucrat	b2("b2", 6);
	Bureaucrat	b3("b3", 45);
	Bureaucrat	b4("b4", 145);
	Bureaucrat	b5("b5", 150);
	std::cout << std::endl;
	AForm	*shrubbery = intern.makeForm("ShrubberyCreationForm", "Giselle");
	AForm	*robotomy = intern.makeForm("RobotomyRequestForm", "Jack Daniel");
	AForm	*presidential = intern.makeForm("PresidentialPardonForm", "Kevin");

	std::cout << "\e[1;31m\nFail, bad form name\e[0m" << std::endl;
	try
	{
		AForm	*test = intern.makeForm("ItsATest", "idk");
		(void)test;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "\e[1;36mShrubberyCreationForm\n\e[0m"  << std::endl;
	std::cout << *shrubbery << std::endl;
	std::cout << std::endl << b1 << std::endl;
	b1.signForm(*shrubbery);
	b1.executeForm(*shrubbery);
	std::cout << std::endl << b2 << std::endl;
	b2.signForm(*shrubbery);
	b2.executeForm(*shrubbery);
	std::cout << std::endl << b3 << std::endl;
	b3.signForm(*shrubbery);
	b3.executeForm(*shrubbery);
	std::cout << std::endl << b4 << std::endl;
	b4.signForm(*shrubbery);
	b4.executeForm(*shrubbery);
	std::cout << std::endl << b5 << std::endl;
	b5.signForm(*shrubbery);
	b5.executeForm(*shrubbery);

	std::cout << std::endl;

	std::cout << "\e[1;32mRobotomyRequestForm\n\e[0m"  << std::endl;
	std::cout << *robotomy << std::endl;
	std::cout << std::endl << b1 << std::endl;
	b1.signForm(*robotomy);
	b1.executeForm(*robotomy);
	std::cout << std::endl << b2 << std::endl;
	b2.signForm(*robotomy);
	b2.executeForm(*robotomy);
	std::cout << std::endl << b3 << std::endl;
	b3.signForm(*robotomy);
	b3.executeForm(*robotomy);
	std::cout << std::endl << b4 << std::endl;
	b4.signForm(*robotomy);
	b4.executeForm(*robotomy);
	std::cout << std::endl << b5 << std::endl;
	b5.signForm(*robotomy);
	b5.executeForm(*robotomy);

	std::cout << std::endl;

	std::cout << "\e[1;33mPresidentialPardonForm\n\e[0m"  << std::endl;
	std::cout << *presidential << std::endl;
	std::cout << std::endl << b1 << std::endl;
	b1.signForm(*presidential);
	b1.executeForm(*presidential);
	std::cout << std::endl << b2 << std::endl;
	b2.signForm(*presidential);
	b2.executeForm(*presidential);
	std::cout << std::endl << b3 << std::endl;
	b3.signForm(*presidential);
	b3.executeForm(*presidential);
	std::cout << std::endl << b4 << std::endl;
	b4.signForm(*presidential);
	b4.executeForm(*presidential);
	std::cout << std::endl << b5 << std::endl;
	b5.signForm(*presidential);
	b5.executeForm(*presidential);


	std::cout << "\e[1;35m\nDesctructors\e[0m" << std::endl;
	delete shrubbery;
	delete robotomy;
	delete presidential;
	
	return (0);
}