/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:30:21 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/16 19:37:55 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::informations_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_informations(int count)
{
	this->index = count + 1;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->informations_name[i] << ":" << std::endl;
		std::cout << "-> ";
		std::getline(std::cin, this->informations[i]);
		while (this->informations[i].length() <= 0)
		{
			std::cout << "/!\\ You must fill the [" << this->informations_name[i] << "] field" << std::endl;
			std::cout << "-> ";
			std::getline(std::cin, this->informations[i]);
		}
	}
	std::cout << "Contact added" << std::endl;
}

void	Contact::display_contact_header(void)
{
	std::cout << "|" << std::setw(10) << this->index  << "|";
	for (int i = 0; i < 3; i++)
	{
		if (informations[i].length() > 10)
			std::cout << informations[i].substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << informations[i]  << "|";
	}
	std::cout << std::endl;
}

void	Contact::display_contact_info(void)
{
	std::cout << "Contact [" << this->index << "]:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << this->informations_name[i] << ":" << this->informations[i] << std::endl;
	}
}