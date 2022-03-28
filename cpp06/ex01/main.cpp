/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:29:58 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/28 16:00:48 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	dstPtr = reinterpret_cast<uintptr_t>(ptr);
	
	return (dstPtr);
}

Data*	deserialize(uintptr_t raw)
{
	Data*	ret = reinterpret_cast<Data *>(raw);

	return (ret);
}

int		main(void)
{
	uintptr_t	raw;
	Data*		exemple = new Data;

	exemple->data = 4224;

	std::cout << "--- Serialize ---" << std::endl;
	raw = serialize(exemple);
	std::cout << "raw     : " << &raw << std::endl;
	std::cout << "exemple : " << exemple << " exemple->data = " << exemple->data << std::endl;

	std::cout << std::endl << "--- Deserialize ---" << std::endl;
	Data*		verif;
	std::cout << "verif   : " << verif << " before deserialize" << std::endl;
	verif = deserialize(raw);
	std::cout << "raw     : " << &raw << std::endl;
	std::cout << "exemple : " << exemple << std::endl;
	std::cout << "verif   : " << verif << " verif->data = " << verif->data << " after deserialize" << std::endl;

	delete exemple;
}