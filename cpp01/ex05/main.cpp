/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:35:09 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/27 14:22:54 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("EROOR");
	Karen.complain("ERROR");
	return (0);
}
