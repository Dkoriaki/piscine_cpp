/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:30:35 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/26 15:01:40 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon();
		
		std::string const &getType(void);
		void	setType(std::string type);
};

#endif
