/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:08:54 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/31 19:34:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdio>
#include <list>

int main()
{
	int		pause;
	std::cout << "\e[1;39mLet's try this amazing main, press ENTER to start\e[0m" << std::endl;
	std::cout << "\e[1;32mSubject Main\e[0m" << std::endl;
	pause = getc(stdin);

	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl; // on affiche l'element en haut de la stack -> 17
		mstack.pop(); // On retire l'element tout en haut
		std::cout << mstack.size() << std::endl;	// on affiche la taille de la stack - > 1
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;	// on affiche tout les elements de la stack donc -> 5 3 5 737 0
		++it;
		}
		std::stack<int> s(mstack); // On fait un constructeur par copie et on voit qu'il n'y a aucune erreur.
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32m- - - Subject main with list - - -\e[0m" << std::endl;
	
	{
		std::list<int>	list;

		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}

	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32m- - - INT MutantStack - - -\e[0m" << std::endl;

	{
		MutantStack<int>	mutantStack;

		mutantStack.push(21);
		mutantStack.push(42);
		mutantStack.push(10);
		mutantStack.push(-482);
		mutantStack.push(123456789);
		
		MutantStack<int>	mutantStack1(mutantStack);
		MutantStack<int>::iterator it = mutantStack1.begin();
		MutantStack<int>::iterator ite = mutantStack1.end();
		std::cout << std::endl;
		std::cout << "size: " << mutantStack1.size() << std::endl;
		std::cout << "top: " << mutantStack1.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
			if (it != ite)
				std::cout << " - ";
		}
		std::cout << std::endl;
	}

	std::cout << "\n\e[1;39mPlease press ENTER to continue\e[0m" << std::endl;
	pause = getc(stdin);
	std::cout << "\e[1;32m- - - STRING MutantStack - - -\e[0m" << std::endl;

	{
		MutantStack<std::string>	mutantStack;

		mutantStack.push("Yo");
		mutantStack.push(" comment");
		mutantStack.push(" tu");
		mutantStack.push(" va");
		mutantStack.push(" ?");
		
		
		MutantStack<std::string>::iterator it = mutantStack.begin();
		MutantStack<std::string>::iterator ite = mutantStack.end();
		std::cout << std::endl;
		std::cout << "size: " << mutantStack.size() << std::endl;
		std::cout << "top: " << mutantStack.top() << std::endl;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it;
			++it;
		}
	}

	std::cout << std::endl;

	return 0;
}
