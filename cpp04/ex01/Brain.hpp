/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:48:55 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/15 13:06:27 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>s

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		void	setIdea(std::string const idea);
		void	printIdeas(void)

		Brain &		operator=( Brain const & rhs );

	private:

		int			_indexIdea;
		std::string	_ideas[100];

};

#endif /* *********************************************************** BRAIN_H */