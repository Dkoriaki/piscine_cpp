/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:02:33 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/25 20:51:51 by dkoriaki         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif