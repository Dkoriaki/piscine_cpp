/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:44:24 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/31 19:12:15 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template < typename T>
class	MutantStack : public std::stack<T>
{
	public:

		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {}
		virtual ~MutantStack() {}
	
		MutantStack<T> &	operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
			{
				std::stack<T>::operator=(rhs);
			}
			return (*this);
		}
	
		typedef typename	MutantStack::container_type::iterator	iterator;
	
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}

};

#endif