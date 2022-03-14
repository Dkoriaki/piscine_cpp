/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:14 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/14 16:58:06 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();

		Dog &	operator=(Dog const & rhs);

		void	makeSound(void) const;

};

#endif