/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectTypes.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:43:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/24 15:32:11 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

bool	isPrintable(char c)
{
	if ((c > 31 && c < 48) || (c > 57 && c < 127 ))
		return (true);
	return (false);
}

void	printChar(std::string str)
{
	char	c(str[0]);

	std::cout << std::fixed << std::setprecision(10);
	std::cout << "char: \e[1;32m[\e[0m" << c << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "int: \e[1;32m[\e[0m" << static_cast<int>(c) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "float: \e[1;32m[\e[0m" << static_cast<float>(c) << "\e[1;32m]\e[0m" << std::endl;
	std::cout << "double: \e[1;32m[\e[0m" << static_cast<double>(c) << "\e[1;32m]\e[0m" << std::endl;
}

bool	detectChar(std::string str)
{
	if (str.length() == 1 && isPrintable(str[0]) && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	argParse(int ac, char **av)
{
	int				count_alpha(0);
	int				count_f(0);
	int				count_p(0);
	int				count_num(0);
	int				i(0);
	bool			error(false);
	std::string		arg;

	if (ac != 2 || (ac == 2 && (arg = av[1]).length() == 0))
		error = true;
	while (arg[i] && error == false)
	{
		if (isPrintable(arg[i]))
		{
			count_alpha++;
			if (arg[i] == 'f')
			{
				count_f++;
				if (isdigit(arg[i - 1]) == false)
					error = true;
			}
			if (arg[i] == '.')
			{
				count_p++;
				if (isdigit(arg[i - 1]) == false)
					error = true;
			}
		}
		else if (isdigit(arg[i]))
		{
			if (count_num == 0 && (count_f != 0 || count_p != 0))
				error = true;
			count_num++;
		}
		i++;
		if ((count_alpha > 1 && (count_p != 1 || count_f != 1)) ||
			(count_alpha != 0 && (count_f != 1 && count_p != 1) && count_num > 0))
			error = true;
	}
	if (error == true)
	{
		std::cout << "\e[1;31m/!\\---Invalid argument---/!\\\e[0m" << std::endl;
		std::cout << "\e[1;38mChar exemple  : 'a' 'A'" << std::endl;
		std::cout << "Int  exemple  : 781 -1 0" << std::endl;
		std::cout << "Float exemple : 42.42f nanf -inff" << std::endl;
		std::cout << "Double exemple: 42.42 nan +inf\e[0m" << std::endl;
		return (false);
	}
	return (true);
}