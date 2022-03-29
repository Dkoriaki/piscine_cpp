/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:41:28 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 16:57:01 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template < typename T >
void	iter(T const *array, size_t const size, void(*f)(T const & arg))
{
	for (size_t i(0); i < size; i++)
		(*f)(array[i]);
};

#endif