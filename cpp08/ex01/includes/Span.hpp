/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:38:38 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/31 18:14:06 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class	notFound : public std::exception
{
	public:
		virtual const char * what() const throw() { return("Not Found"); };
};

class	Span
{
	public:
		class	numberLimitIsReached : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class	noSpan : public	std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class	badRange : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		Span();
		Span(unsigned int N);
		Span(Span const & src);
		~Span();

		Span &	operator=(Span const & rhs);

		void	addNumber(int number);
		int		shortestSpan(void) const; 
		int		longestSpan(void) const;

		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		std::vector<int>	getArray(void) const;

	private:
		std::vector<int>	_array;
		size_t				_N;
		size_t				_count;

};

std::ostream &	operator<<(std::ostream & o, Span const & rhs);

#endif