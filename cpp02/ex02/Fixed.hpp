/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:35:31 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/03 02:17:26 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		bool	operator>(const Fixed & rhs) const;
		bool	operator<(const Fixed & rhs) const;
		bool	operator>=(const Fixed & rhs) const;
		bool	operator<=(const Fixed & rhs) const;
		bool	operator==(const Fixed & rhs) const;
		bool	operator!=(const Fixed & rhs) const;

		Fixed	operator+(const Fixed & rhs) const;
		Fixed	operator-(const Fixed & rhs) const;
		Fixed	operator*(const Fixed & rhs) const;
		Fixed	operator/(const Fixed & rhs) const;
		Fixed 	&operator--(void);
		Fixed	operator--(int);
		Fixed 	&operator++(void);
		Fixed	operator++(int);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static const Fixed	&min(Fixed & a, Fixed & b);
		static const Fixed	&min(Fixed const & a, Fixed const & b);
		static const Fixed	&max(Fixed & a, Fixed & b);
		static const Fixed	&max(Fixed const & a, Fixed const & b);

	private:
		int		_nb;
		static int const _bits_count = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
