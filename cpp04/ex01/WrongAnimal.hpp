/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:45:30 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 12:02:37 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal &	operator=(WrongAnimal const & rhs);

		void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif