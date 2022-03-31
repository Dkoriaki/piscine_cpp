/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:37:59 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/30 21:34:03 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0);
{
}

Span::Span(unsigned int N) : _size(N)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	
}