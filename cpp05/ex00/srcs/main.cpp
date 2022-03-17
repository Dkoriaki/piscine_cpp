/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/17 12:48:58 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "\e[1;31m\nGradeUp Error\e[0m" << std::endl;
	try
	{
		Bureaucrat	yves("yves", 1);
		std::cout << yves << std::endl;
		yves.gradeUp();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << "\e[1;31m\nBad init with to Low grade Error\e[0m" << std::endl;
	try
	{
		Bureaucrat	Jhon("Jhon", 151);
		std::cout << Jhon << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
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
		std::cout << e.what() << '\n';
	}

	std::cout << "\e[1;32m\nGradeUp example\e[0m" << std::endl;
	try
	{
		Bureaucrat	Giselle("Giselle", 10);
		std::cout << Giselle << std::endl;
		Giselle.gradeUp();
		std::cout << Giselle << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\e[1;32m\nGradeDown example\e[0m" << std::endl;
	try
	{
		Bureaucrat	Dani("Dani", 42);
		std::cout << Dani << std::endl;
		Dani.gradeDown();
		std::cout << Dani << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	
	return (0);
}