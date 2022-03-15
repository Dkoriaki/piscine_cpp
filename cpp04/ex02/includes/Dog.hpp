/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:14 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/16 00:10:38 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();

		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
		virtual void	TalkAboutHisIdeas(void) const;

	private:
		Brain	*_brain;

};

#endif