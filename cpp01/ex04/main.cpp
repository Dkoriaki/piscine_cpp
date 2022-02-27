/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:12:48 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/26 23:04:51 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	ft_parsing(int ac, char **av)
{
	if (ac != 4 || !av[2][0] || !av[3][0])
	{
		std::cout << "\033[1;31m/!\\\033[0m Parsing failed, need: <filename>, <string1>, <string2> \033[1;31m/!\\\033[0m" << std::endl;
		return(0);
	}
	return (1);
}

void	ft_replace(std::string const &s1, std::string const &s2, std::ifstream& infile, std::ofstream& outfile)
{
	std::string 	line;
	std::size_t		found;
	std::size_t		start(0);
	std::size_t		len_s1 = s1.length();

	while (getline(infile, line))
	{
		start = 0;
		while ((found = line.find(s1, start)) != std::string::npos)
		{
			line.erase(found, len_s1);
			line.insert(found, s2);
			start = found + s2.length();
		}
		outfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::string		line;
	std::string		outputFile;

	if (!ft_parsing(ac, av))
		return (1);
	std::ifstream	infile(av[1]);
	if (infile.is_open() == false)
	{
		std::cout << "\033[1;31m/!\\\033[0m Can't open [" << av[1] << "] check that the file exists \033[1;31m/!\\\033[0m" << std::endl;
		return (1);
	}
	outputFile = av[1];
	outputFile += ".replace";
	std::ofstream	outfile(outputFile);
	if (outfile.is_open() == false)
	{
		std::cout << "\033[1;31m/!\\\033[0m Can't open [" << outputFile << "] \033[1;31m/!\\\033[0m" << std::endl;
		return (1);
	}
	ft_replace(av[2], av[3], infile, outfile);
	infile.close();
	outfile.close();
	return (0);
}