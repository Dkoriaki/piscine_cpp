/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/24 07:52:13 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	std::cout << "\e[1;31m\nCouldn't sign cause of to low signGrade\e[0m" << std::endl;
	try
	{
		Bureaucrat	Jhon("Jhon", 150);
		std::cout << Jhon << std::endl;
		Form	f1("Amazing Form", 10);
		std::cout << f1 << std::endl;
		Jhon.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\e[1;32m\nSign succes example\e[0m" << std::endl;
	try
	{
		Bureaucrat	Dani("Dani", 42);
		std::cout << Dani << std::endl;
		Form		f2;
		std::cout << f2 << std::endl;
		Dani.signForm(f2);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\e[1;32m\n1st Sign failed cause of to low grade but after gradeUp it's a succes !\e[0m" << std::endl;
	try
	{
		Bureaucrat	Michel("Michel", 11);
		std::cout << Michel << std::endl;
		Form		f3("LAZ", 10);
		std::cout << f3 << std::endl;
		Michel.signForm(f3);
		std::cout << f3 << std::endl;
		Michel.gradeUp();
		Michel.signForm(f3);
		std::cout << f3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\e[1;31m\nGradeDown Error\e[0m" << std::endl;
	try
	{
		Bureaucrat	Seb("Seb", 150);
		std::cout << Seb << std::endl;
		Seb.gradeDown();
		std::cout << Seb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\e[1;31m\nBad Form init with to low grade Error\e[0m" << std::endl;
	try
	{
		Form	f4("Lowwww", 160);
		std::cout << f4 << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\e[1;31m\nBad Form init with to High grade Error\e[0m" << std::endl;
	try
	{
		Form	f5("Highhhh", 0);
		std::cout << f5 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}