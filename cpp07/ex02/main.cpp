/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:00:54 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 23:17:28 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 150
int main(int, char**)
{
	std::cout << "\n\e[1;35m- - - - Subject main - - - -\e[0m\n" << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << "mirror[" << i << "] = " << mirror[i] << " | numbers[" << i << "] = " << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "\n OUT OF RANGE Trying to numbers[-2] = 0" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "\n OUT OF RANGE Trying to numbers[MAX_val=" << MAX_VAL << "] = 0" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "\n Changing numbers values" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << "old numbers[i] = " << numbers[i] << " | new numbers[i] = ";
        numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
    }

	std::cout << "\n\e[1;35m- - - - String array - - - -\e[0m\n" << std::endl;
	try
	{
		Array<std::string>	tabS(4);
		tabS[0] = "Salut";
		tabS[1] = "je";
		tabS[2] = "suis";
		tabS[3] = "l'Ovni";

		for (int i = 0; i < 4; i++)
   	 	{
			std::cout << tabS[i] << std::endl;
    	}
		tabS[42] = "Ca doit pas marcher";
		std::cout << "tabS[42] = " << tabS[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\e[1;35m- - - - Empty array - - - -\e[0m\n" << std::endl;

	Array<int>	emptyArray;
	std::cout << "emptyArray size = " << emptyArray.size() << std::endl;

	std::cout << "\n\e[1;35m- - - - Default init - - - -\e[0m\n" << std::endl;

	try
	{
		Array<int>	test(3);
		Array<char>	test2(3);
		Array<std::string> test3(3);
		Array<float> test4(3);

		for (unsigned int i(0); i < 3; i++)
		{
			std::cout << "int array[" << i << "] = [" << test[i] << "]" << std::endl;
			std::cout << "char array[" << i << "] = [" << test2[i] << "]" << std::endl;
			std::cout << "string array[" << i << "] = [" << test3[i] << "]" << std::endl;
			std::cout << "float array[" << i << "] = [" << test4[i] << "]" << std::endl;
			std::cout << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    delete [] mirror;//
	
    return 0;
}