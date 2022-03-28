/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:18:46 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/28 13:55:57 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

void	convertChar(std::string str)
{
	char	c(str[0]);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: \e[1;32m[\e[0m" << c << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(c) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(c) << "f" << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << static_cast<double>(c) << "\e[1;32m]\e[0m" << std::endl;
}

// bool	isPrintable(char c)
// {
// 	if ((c > 31 && c < 48) || (c > 57 && c < 127 ))
// 		return (true);
// 	return (false);
// }

void	convertInt(std::string str)
{
	double	num = strtod(str.c_str(), NULL);
	
	std::cout << std::fixed << std::setprecision(1);
	if (num < 32. || num > 126.)
		std::cout << "char: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "char: \e[1;32m[\e[0m" << static_cast<char>(num) << "\e[1;32m]\e[0m" << std::endl;
	if (num > (static_cast<double>(INT_MAX)) || num < (static_cast<double>(INT_MIN)))
		std::cout << "int: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(num) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(num) << "f" << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << num << "\e[1;32m]\e[0m" << std::endl;
}

void	convertFloat(std::string str)
{
	double	num = strtod(str.c_str(), NULL);

	if (str == "nanf")
	{
		std::cout << "char: \e[1;32mimpossible\e[0m" << std::endl;
		std::cout << "int: \e[1;32mimpossible\e[0m" << std::endl;
		std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(num) << "f" << "\e[1;32m]\e[0m" << std::endl;
		std::cout << "double: \e[1;32m[\e[0m" << num << "\e[1;32m]\e[0m" << std::endl;
		return;
	}
	std::cout << std::fixed << std::setprecision(countDigitAfterPoint(str));
	if (num < 32. || num > 126.)
		std::cout << "char: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "char: \e[1;32m[\e[0m" << static_cast<char>(num) << "\e[1;32m]\e[0m" << std::endl;
	if (num > (static_cast<double>(INT_MAX)) || num < (static_cast<double>(INT_MIN)))
		std::cout << "int: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(num) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(num) << "f" << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << num << "\e[1;32m]\e[0m" << std::endl;
}

void	convertDouble(std::string str)
{
	double	num = strtod(str.c_str(), NULL);

	if (str == "nan")
	{
		std::cout << "char: \e[1;32mimpossible\e[0m" << std::endl;
		std::cout << "int: \e[1;32mimpossible\e[0m" << std::endl;
		std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(num) << "f" << "\e[1;32m]\e[0m" << std::endl;
		std::cout << "double: \e[1;32m[\e[0m" << num << "\e[1;32m]\e[0m" << std::endl;
		return;
	}
	std::cout << std::fixed << std::setprecision(countDigitAfterPoint(str));
	if (num < 32. || num > 126.)
		std::cout << "char: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "char: \e[1;32m[\e[0m" << static_cast<char>(num) << "\e[1;32m]\e[0m" << std::endl;
	if (num > (static_cast<double>(INT_MAX)) || num < (static_cast<double>(INT_MIN)))
		std::cout << "int: \e[1;32mimpossible\e[0m" << std::endl;
	else
		std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(num) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(num) << "f" << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << num << "\e[1;32m]\e[0m" << std::endl;
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

int		countDigitAfterPoint(std::string str)
{
	int		i(0);
	int		count(0);
	bool	dot(false);

	while (str[i])
	{
		if (isdigit(str[i]) && dot == true)
			count++;
		if (str[i] == '.')
			dot = true;
		i++;
	}
	return (count);
}