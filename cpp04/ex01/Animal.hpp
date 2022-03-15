/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:06 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 15:41:11 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();

		Animal &	operator=(Animal const & rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		virtual void	TalkAboutHisIdeas(void) const;

	protected:
		std::string	_type;

};

#endif