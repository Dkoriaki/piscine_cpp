/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:35:10 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 12:33:34 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound(void) const;

};

#endif