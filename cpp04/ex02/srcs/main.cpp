/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:50:27 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/16 00:27:37 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	int		nbAnimals(4);
	int		nbDogs(nbAnimals / 2);
	int		nbCats(nbAnimals - nbDogs);

	std::cout << "\e[1;32mConstructors\e[0m" << std::endl;
	AAnimal	*animals[nbAnimals];

	// Dogs creation
	for (int i(0); i < nbDogs; i++)
	{
		animals[i] = new Dog;
		std::cout << "animals[" << i << "] is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	// Cats creation
	for (int i(nbDogs); i < (nbCats + nbDogs); i++)
	{
		animals[i] = new Cat;
		std::cout << "animals[" << i << "] is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << "Numbers of animals[" << nbAnimals << "] so we have ["
			<< nbDogs << "]Dogs and [" << nbCats
			<< "]Cats\n" << std::endl;
	
	std::cout << "animals[1] type : " << animals[1]->getType() << std::endl;
	animals[1]->TalkAboutHisIdeas();

	std::cout << "\n\e[1;33m\nShow DEEP COPY\e[0m" << std::endl;
	Dog	*toto = new Dog;
	Dog	titi(*toto);
	delete toto;
	titi.makeSound();
	titi.TalkAboutHisIdeas();

	//AAnimal		abstractAnimal;// uncomment to see abstract compilation error

	std::cout << "\e[1;31m\nDestructors\e[0m" << std::endl;

	for(int i(0); i < nbAnimals; i++)
		delete animals[i];
	return (0);
}
