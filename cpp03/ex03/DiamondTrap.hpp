/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:09:29 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/12 17:09:06 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap
{
    public:
		//DiamondTrap(void);
		DiamondTrap(std::string name);
		//DiamondTrap(FragTrap const & src);
		~DiamondTrap(void);

		//DiamondTrap &	operator=(FragTrap const & rhs);

		void	attack(const std::string& target);

    private:
        std::string     _name;
};

#endif