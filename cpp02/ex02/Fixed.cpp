/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:35:40 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/03 16:23:17 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _nb(nb << this->_bits_count)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nb) : _nb((int)roundf(nb * (1 << this->_bits_count)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : _nb(src._nb)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_nb / (float)(1 << this->_bits_count));
}

int		Fixed::toInt(void) const
{
	return (this->_nb >> this->_bits_count);
}

static const Fixed	&	Fixed::min(Fixed & a, Fixed & b)
{
	return (a > b ? b : a);
}

static const Fixed	&	Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a > b ? b : a);
}

static const Fixed	&	Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b ? a : b);
}

static const Fixed	&	Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a > b ? a : b);
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(const Fixed & rhs) const
{
	return (_nb > rhs._nb);
}

bool	Fixed::operator<(const Fixed & rhs) const
{
	return (_nb < rhs._nb);
}

bool	Fixed::operator>=(const Fixed & rhs) const
{
	return (_nb >= rhs._nb);
}

bool	Fixed::operator<=(const Fixed & rhs) const
{
	return (_nb <= rhs._nb);
}

bool	Fixed::operator==(const Fixed & rhs) const
{
	return (_nb == rhs._nb);
}

bool	Fixed::operator!=(const Fixed & rhs) const
{
	return (_nb != rhs._nb);
}

Fixed	Fixed::operator+(const Fixed & rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed & rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed & rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed & rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator--(void)
{
	_nb--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--(*this);
	return (tmp);
}

Fixed &	Fixed::operator++(void)
{
	_nb++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++(*this);
	return (tmp);
}
