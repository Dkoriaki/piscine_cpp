/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:11:31 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 14:38:59 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int		pause;
	std::cout << "\e[1;39mLet's try this amazing main, press ENTER to start\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mINT\e[0m" << std::endl;
	{
		int		a(42), b(1);
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max : " << max<int>(a, b) << std::endl;
		std::cout << "min : " << min<int>(a, b) << std::endl;
		std::cout << "Swap template called" << std::endl;
		swap<int>(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mCHAR\e[0m" << std::endl;
	{
		char		a('A'), b('B');
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max : " << max<char>(a, b) << std::endl;
		std::cout << "min : " << min<char>(a, b) << std::endl;
		std::cout << "Swap template called" << std::endl;
		swap<char>(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mFLOAT\e[0m" << std::endl;
	{
		float		a(12.5f), b(42.42f);
		std::cout << "a = " << a << " | b = " << b << std::endl;
		std::cout << "max : " << max<float>(a, b) << std::endl;
		std::cout << "min : " << min<float>(a, b) << std::endl;
		std::cout << "Swap template called" << std::endl;
		swap<float>(a, b);
		std::cout << "a = " << a << " | b = " << b << std::endl;
	}
	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32mSubject MAIN\e[0m" << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}