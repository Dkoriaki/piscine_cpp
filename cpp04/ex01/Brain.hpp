/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:48:55 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 15:39:55 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		void	printIdeas(void);

		Brain &		operator=( Brain const & rhs );

	private:

		std::string	_ideas[100];

};

#endif /* *********************************************************** BRAIN_H */