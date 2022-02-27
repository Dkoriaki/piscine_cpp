/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:38:38 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/27 14:22:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- \
ketchup burger. I really do !" << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in \
my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	Karen	Karen;
	void	(Karen::*ptr_fct[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	std::string	fctName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (fctName[i] == level)
			(Karen.*ptr_fct[i])();
}