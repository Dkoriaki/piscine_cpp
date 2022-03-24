/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 00:13:03 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/24 11:05:48 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		class	WrongFormNameException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern &	operator=(Intern const & rhs);

		AForm	*makeForm(std::string form, std::string target);

	private:
		AForm	*_createShrubberyForm(std::string target);
		AForm	*_createRobotomyForm(std::string target);
		AForm	*_createPresidentialForm(std::string target);

};

#endif