/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:23:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 21:36:50 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "adress string    = " << &string << std::endl;
	std::cout << "adress stringPTR = " << stringPTR << std::endl;
	std::cout << "adress stringREF = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value string    = " << string << std::endl;
	std::cout << "value stringPTR = " << *stringPTR << std::endl;
	std::cout << "value stringREF = " << stringREF << std::endl;

	return (0);
}