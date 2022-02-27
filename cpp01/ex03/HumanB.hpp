/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:31:13 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/26 15:23:47 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif