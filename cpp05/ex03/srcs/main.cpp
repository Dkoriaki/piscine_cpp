/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/22 01:02:54 by dkoriaki         ###   ########.fr       */
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
	Intern	intern;
	

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

	AForm	*test = intern.makeForm("ShrubberyCreationForm", "Prout");

	Bureaucrat	B("bill", 2);
	B.signForm(*test);
	B.executeForm(*test);


	delete test;
	
	return (0);
}