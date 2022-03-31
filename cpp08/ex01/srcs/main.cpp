/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:37:42 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/31 18:24:02 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime>

class	RandomVector
{
	public:
		RandomVector() : _value(0) {}
		int	operator()()
		{
			this->_value = rand() % 1000;
			return(this->_value);
		}

	private:
		int	_value;
};

std::vector<int>	randVector(size_t size)
{
	std::vector<int>	ret(size, 0);
	RandomVector		f;

	for(std::vector<int>::iterator it=ret.begin(); it!=ret.end(); ++it)
    {
        *it = f(); //On appelle simplement le foncteur sur chacun des éléments du tableau
    }
	return (ret);
}

int		main(void)
{
	srand(time(NULL));
	int		pause;
	std::cout << "\e[1;39mLet's try this amazing main, press ENTER to start\e[0m" << std::endl;
	pause = getc(stdin);


	try
	{
		Span	test(5);

		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mrandom vector with add range\e[0m" << std::endl;
	
	try
	{
		std::vector<int>	tab = randVector(10);
		Span				span(10);
	
		//span.addNumber(0);
		span.addRange(tab.begin(), tab.end());
		std::cout << span << std::endl;
		std::cout << "Longest Span is : " << span.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mSpan with only 0 with addNumber and only 5 with addRange\e[0m" << std::endl;

	try
	{
		Span	test(10);
		std::vector<int>	vec(5,5);

		test.addNumber(0);
		test.addNumber(0);
		test.addNumber(0);
		test.addNumber(0);
		test.addNumber(0);
		test.addRange(vec.begin(), vec.end());
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mSpan default constructor called so maxSize = 0\e[0m" << std::endl;

	try
	{
		Span	test;
		
		test.addNumber(6);
		test.addNumber(4);
		test.addNumber(2);
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mtry to use longestSpan() & shortestSpan() but with 1 int, so we must have an exception\e[0m" << std::endl;

	try
	{
		Span	test(10);
		
		test.addNumber(6);
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mSpan with more than 10 000 numbers\e[0m" << std::endl;

	try
	{
		Span	test(11000);
		
		std::vector<int>	bigVector = randVector(10999);

		test.addRange(bigVector.begin(), bigVector.end());
		test.addNumber(0);
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mSpan with 100 numbers\e[0m" << std::endl;

	try
	{
		Span	test(100);
		
		std::vector<int>	bigVector = randVector(100);

		test.addRange(bigVector.begin(), bigVector.end());
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mLast test with consecutive number\e[0m" << std::endl;

	try
	{
		Span	test(5);

		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
		
		std::cout << test << std::endl;
		std::cout << "Longest Span is : " << test.longestSpan() << std::endl;
		std::cout << "Shortest Span is : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}