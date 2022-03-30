/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:38:38 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/30 21:23:49 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>

class	Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		~Span();

		Span &	operator=(Span const & rhs);

		void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);

	private:
		std::vector<int>	_array;
		size_t				_size;

}

std::ostream &	operator<<(std::ostream & o, Span const & rhs);

#endif