/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:03:54 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/30 16:54:10 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class	notFound : public std::exception
{
	public:
		virtual const char * what() const throw() { return("Not Found"); };
};

template < typename T >
typename T::iterator	easyfind(T & src, int toFind) 
{
	typename T::iterator	it = find(src.begin(), src.end(), toFind);

	if (it != src.end())
		return (it);
	else
		throw notFound();
}

#endif