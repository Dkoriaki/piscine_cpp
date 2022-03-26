/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:18:46 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/26 16:15:47 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

void	convertChar(std::string str)
{
	char	c(str[0]);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: \e[1;32m[\e[0m" << c << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(c) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(c) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << static_cast<double>(c) << "\e[1;32m]\e[0m" << std::endl;
}

void	convertInt(std::string str)
{
	(void)str;
	std::cout << "I am the Int convertor" << std::endl;
}

void	convertFloat(std::string str)
{
	(void)str;
	std::cout << "I am the Float convertor" << std::endl;
}

void	convertDouble(std::string str)
{
	(void)str;
	std::cout << "I am the Double convertor" << std::endl;
}

void	convertFail(std::string str)
{
	(void)str;
	std::cout << "\e[1;31m/!\\---Invalid argument---/!\\\e[0m" << std::endl;
	std::cout << "\e[1;38mChar exemple  : 'a' 'A'" << std::endl;
	std::cout << "Int  exemple  : 781 -1 0" << std::endl;
	std::cout << "Float exemple : 42.42f nanf -inff" << std::endl;
	std::cout << "Double exemple: 42.42 nan +inf\e[0m" << std::endl;
}
