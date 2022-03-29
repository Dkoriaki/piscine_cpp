/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:03:24 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 17:56:18 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template < typename T >
class	Array 
{
	public:
		class	OperatorOutOfRangeException : public std::exception
		{
			public:
				virtual const char * what() const throw() { return("Operator Out of range"); };
		};
		Array() : _rawArray(NULL), _size(0) {}
		Array(unsigned int n) : _rawArray(new T[n]), _size(n) {
			for (unsigned int i = 0; i < _size; i++)
				this->_rawArray[i] = T();
		}
		Array(T const & src) : _rawArray(NULL), _size(0) { *this = src; }
		~Array() {}

		Array &		operator=(Array const & rhs) {
			if (this != &rhs)
			{
				if (this->_size != 0)
					delete [] this->_rawArray;
				this->_rawArray = new T[rhs._size];
				this->_size = rhs._size;
				for (unsigned int i(0); i < rhs._size; i++)
					this->_rawArray[i] = rhs._rawArray[i];
			}
			return(*this);
		}

		T	&	operaror[](unsigned int position) const {
			if (position >= this->_size)
				throw (Array::OperatorOutOfRangeException)
			return (this->_rawArray[position]);
		}


		unsigned int size(void) const { return(this->_size); }

	private:
		T				*_rawArray;
		unsigned int	_size;
};

#endif