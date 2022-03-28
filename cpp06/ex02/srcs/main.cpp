/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:43 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/28 16:04:27 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *	generate(void)
{
	Base	*ret = NULL;
	int	random;
	random = rand() % 3;

	switch (random)
	{
		case 0:
			std::cout << "\e[1;32mA has been created\e[0m" << std::endl;
			ret = new A;
			break;
		case 1:
			std::cout << "\e[1;33mB has been created\e[0m" << std::endl;
			ret = new B;
			break;
		case 2:
			std::cout << "\e[1;34mC has been created\e[0m" << std::endl;
			ret = new C;
			break;
		default:
			std::cout << "\e[1;31mGenerate failed\e[0m" << std::endl;
	}
	return (ret);
}

void	identify(Base* p)
{
	if (dynamic_cast< A* >(p) != NULL)
		std::cout << "pointer identifier -> It's a \e[1;32mA\e[0m class" << std::endl;
	else if (dynamic_cast< B* >(p) != NULL)
		std::cout << "pointer identifier -> It's a \e[1;33mB\e[0m class" << std::endl;
	else if (dynamic_cast< C* >(p) != NULL)
		std::cout << "pointer identifier -> It's a \e[1;34mC\e[0m class" << std::endl;
	else
		std::cout << "pointer identifier couldn't identify the class" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base &	tester = dynamic_cast< A& >(p);
		(void)tester;
		std::cout << "ref identifier -> It's a \e[1;32mA\e[0m class" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			Base &	tester = dynamic_cast< B& >(p);
			(void)tester;
			std::cout << "ref identifier -> It's a \e[1;33mB\e[0m class" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				Base &	tester = dynamic_cast< C& >(p);
				(void)tester;
				std::cout << "ref identifier -> It's a \e[1;34mC\e[0m class" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "ref identifier couldn't identify the class" << std::endl;
			}
		}
	}
}

int	main(void)
{
	srand (time(NULL));
	
	Base *	test = generate();
	identify(test);
	identify(*test);

	delete test;
	return (0);
}