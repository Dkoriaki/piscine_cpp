/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:58:38 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/26 16:10:53 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (argParse(ac, av) == false)
		return (1);

	void	(*ptrfct[4])(std::string) = {&convertChar, &convertInt, &convertFloat, &convertDouble};
	std::cout << "Parse ok" << std::endl;

	if (detectChar(av[1]))
		ptrfct[detectType(av[1])](av[1]);
	return (0);
}

