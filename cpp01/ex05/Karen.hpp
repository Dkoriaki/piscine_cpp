/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:36:10 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/27 13:04:44 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
		
	public:
		Karen(/* args */);
		~Karen();
		void	complain(std::string level);
};

#endif