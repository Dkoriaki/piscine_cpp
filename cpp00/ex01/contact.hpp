/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:13:29 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/16 19:27:23 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
			int					index;
			bool				empty;
			std::string			informations[5];
			static std::string	informations_name[5];

	public:
			Contact();
			~Contact();
			
			void	set_informations(int count);
			void	display_contact_header(void);
			void	display_contact_info(void);
};

#endif