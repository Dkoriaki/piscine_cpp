/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:50:27 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/14 17:11:17 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int		main(void)
{
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	

	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* k = new WrongAnimal();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << std::endl;

	const WrongAnimal* q = new WrongCat();
	std::cout << q->getType() << " " << std::endl;
	q->makeSound();
	std::cout << std::endl;

	Animal	test1;
	std::cout << test1.getType() << " " << std::endl;
	test1.makeSound();
	std::cout << std::endl;

	Cat		test2;
	std::cout << test2.getType() << " " << std::endl;
	test2.makeSound();
	std::cout << std::endl;

	test1 = test2;
	std::cout << test1.getType() << " " << std::endl;
	test1.makeSound();
	std::cout << std::endl;


	delete meta;
	delete i;
	delete j;
	delete k;
	delete q;
	return (0);
}