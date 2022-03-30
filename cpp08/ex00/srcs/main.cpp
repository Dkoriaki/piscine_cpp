/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:03:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/30 17:31:17 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <ctime>
#include <string>
#include <cstdio>


int	main(void)
{
	srand(time(NULL));
	int		pause;

	std::cout << "\e[1;39mLet's try this amazing main, press ENTER to start\e[0m" << std::endl;
	pause = getc(stdin);

	std::cout << "\e[1;32mINT\e[0m" << std::endl;
	{
		std::vector<int> tab;

		tab.push_back(2);
		tab.push_back(24);
		tab.push_back(42);
		tab.push_back(-10);

		std::vector<int>::iterator it;

		try
		{
			it = easyfind(tab, 2);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			it = easyfind(tab, -10);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			it = easyfind(tab, 484448);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mRandom\e[0m" << std::endl;
	{
		std::vector<int>	tab;

		size_t	range(rand() % 50);
		std::cout << "random array of " << range << "ints" << std::endl;
		for (size_t i(0); i < range; i++)
		{
			tab.push_back(rand() % 50);
			std::cout << tab[i] << std::endl;
		}
		std::cout << std::endl;
		try
		{
			int		random(rand() % 50);
			std::cout << "1st random int = " << random << std::endl;
			std::vector<int>::iterator it = easyfind(tab, random);
			std::cout << "1st it = " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		try
		{
			int		random(rand() % 50);
			std::cout << "2nd random int = " << random << std::endl;
			std::vector<int>::iterator it = easyfind(tab, random);
			std::cout << "2nd it = " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		try
		{
			int		random(rand() % 50);
			std::cout << "3rd random int = " << random << std::endl;
			std::vector<int>::iterator it = easyfind(tab, random);
			std::cout << "3rd it = " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		try
		{
			int		random(rand() % 50);
			std::cout << "4th random int = " << random << std::endl;
			std::vector<int>::iterator it = easyfind(tab, random);
			std::cout << "4th it = " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	
	return (0);
}