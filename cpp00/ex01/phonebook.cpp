/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:33:08 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/02/17 22:49:40 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->count = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::display_menu_header(void)
{
	std::cout << "Welcome to awesome phonebook !\n" << std::endl;
	std::cout << "Enter your command :" << std::endl;
	std::cout << "-[ADD] To add a new contact to your phonebook" << std::endl;
	std::cout << "-[SEARCH] To search a contact in your phonebook" << std::endl;
	std::cout << "-[EXIT] To quit the phonebook (care you will lose all your contacts" << std::endl;
}

void	Phonebook::search_contact(void)
{
	int		index;

	if (this->count == 0)
	{
		std::cout << "/!\\ Currently no contacts have been added, please add some contacts before you want to use SEARCH" << std::endl;
		return ;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->count && i < 8; i++)
	{
		this->contact[i].display_contact_header();
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "~ Select index to display informations about the contact or 0 to Exit Search menu" << std::endl;
	std::cout << "index > ";
	while (!(std::cin >> index) || (index < 0 || (index > this->count || index > 8)))
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "/!\\ Bad index, select an existing index or 0 to Exit Search menu" << std::endl;
		std::cout << "index > ";
	}
	std::cin.ignore();
	if (index > 0 && (index - 1 < this->count && index - 1 < 8))
		this->contact[index - 1].display_contact_info();
}

void	Phonebook::add_contact(void)
{
	this->contact[this->count%8].set_informations(this->count%8);
	this->count++;
}

int		main(void)
{
	Phonebook	phonebook;
	std::string	command;
	bool		run(true);

	phonebook.display_menu_header();
	while(run)
	{
		std::cout << "$> ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			run = false;
		else if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
	}
	return(0);
}