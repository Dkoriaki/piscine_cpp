/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:01:51 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/16 23:48:28 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class	Phonebook
{
	private:
			Contact	contact[8];
			int		count;
	public:
			Phonebook();
			~Phonebook();

			void	add_contact(void);
			void	display_menu_header(void);
			void	search_contact(void);
};

#endif