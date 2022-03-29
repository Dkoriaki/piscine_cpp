/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:04:48 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 14:25:55 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cstdio>

template< typename T >
T	max( T const & x, T const & y)
{
	return ((y >= x) ? y : x);
}

template< typename T >
T	min( T const & x, T const & y)
{
	return ((y <= x) ? y : x);
}

template< typename T >
void	swap( T & x, T & y)
{
	T	tmp(y);

	y = x;
	x = tmp;
}

#endif