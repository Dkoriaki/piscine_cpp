/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:34:24 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/27 20:37:13 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Karen.hpp"

int		filter(char *str)
{
	std::string	fctName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	filter(0);

	for(int i = 0; i < 4; i++)
	{
		if (str != fctName[i])
			filter++;
		if (str == fctName[i])
			return (filter);
	}
	return (filter);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "\033[1;31m/!\\\033[0m Wrong argument \033[1;31m/!\\\033[0m" << std::endl;
		return (1);
	}
	Karen	Karen;
	switch (filter(av[1]))
	{
		case 0:
			Karen.complain("DEBUG");
		case 1:
			Karen.complain("INFO");
		case 2:
			Karen.complain("WARNING");
		case 3:
			Karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
