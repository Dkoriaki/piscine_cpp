/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:37:59 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/31 18:13:21 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
//	Constructors / Destructors
*/

Span::Span() : _N(0), _count(0)
{
}

Span::Span(unsigned int N) : _N(N), _count(0)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span()
{
}

/*
//	Exceptions
*/

const char *	Span::numberLimitIsReached::what() const throw()
{
	return ("The number limit of this Span is reached");
}

const char *	Span::noSpan::what() const throw()
{
	return ("There is no span, need minimum 2 int");
}

const char *	Span::badRange::what() const throw()
{
	return ("Bad range");
}

/*
//	Member fonctions
*/

// void	addNumber(int number);
// 		int		shortestSpan(void) const; 
// 		int		longestSpan(void) const ;

void	Span::addNumber(int number)
{
	if (this->_count < this->_N)
	{
		this->_array.push_back(number);
		this->_count++;
	}
	else
	{
		throw Span::numberLimitIsReached();
	}
}

int		Span::shortestSpan(void) const
{
	if ( this->_count < 2)
		throw Span::noSpan();
	
	int							min(INT_MAX);
	std::vector<int>			sortedArray(this->getArray());
	sort(sortedArray.begin(), sortedArray.end());
	std::vector<int>::iterator	a = sortedArray.begin();
	std::vector<int>::iterator	b = a + 1;
	
	for (size_t i(0); i < sortedArray.size(); i++)
	{
		if (b != sortedArray.end())
			if ((*b - *a) < min)
				min = (*b - *a);
		b++;
		a++;
	}
	return (min);
}

int		Span::longestSpan(void) const
{
	if ( this->_count < 2)
		throw Span::noSpan();
	return ((*std::max_element(this->_array.begin(), this->_array.end())) - (*std::min_element(this->_array.begin(), this->_array.end())));
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (static_cast<size_t>(end - begin) <= ( this->_N - this->_count)) // give the position of the last it, so it's the lenght
	{
		_array.insert(this->_array.end(), begin, end);
		this->_count += (end - begin);
	}
	else
		throw Span::badRange();
}


std::vector<int>	Span::getArray(void) const
{
	return (this->_array);
}

/*
//	Operators
*/

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_array =	rhs.getArray();
		this->_N = rhs._N;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	std::vector<int>	array(rhs.getArray());
	std::vector<int>::iterator	it;
	
	for(it = array.begin(); it!=array.end(); ++it)
    {
        o << *it << " | ";    //On accède à l'élément pointé via l'étoile
    }
	o << std::endl;
	return (o);
}