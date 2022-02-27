/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:37:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 21:04:23 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
		void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif