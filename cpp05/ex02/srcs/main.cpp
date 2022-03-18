/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:16 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 16:55:22 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main(void)
{
	ShrubberyCreationForm	f1("qlqchose");
	Bureaucrat				b1("Jack", 10);

	std::cout << f1 << std::endl;
	b1.executeForm(f1);
	b1.signForm(f1);
	std::cout << f1 << std::endl;
	b1.executeForm(f1);

	std::cout << std::endl;

	Bureaucrat				b2("Theo", 45);
	RobotomyRequestForm		f2("THEO");

	b2.executeForm(f2);
	b2.signForm(f2);
	std::cout << f2 << std::endl;
	b2.executeForm(f2);
	return (0);
}