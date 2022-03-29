/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:36:46 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/29 16:59:45 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();return o; }


template < typename T >
void	print(T const & x)
{
	std::cout << x << std::endl;
	return ;
}

int	main(void)
{
	
	int		array[5] = {0, 1, 2, 3, 4};
	std::cout << "Array of INTs" << std::endl;
	iter<int>(array, 5, print);
	std::cout << std::endl;

	Awesome	tab[5];
	std::cout << "Array of AWESOMEs" << std::endl;
	iter<Awesome>(tab, 5, print);
	std::cout << std::endl;

	std::cout << "Array of CHARs" << std::endl;
	char	charArray[5] = {'a', 'b', 'c', 'd', 'e'};
	iter<char>(charArray, 5, print);

	return(0);
}