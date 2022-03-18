/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:04:17 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 10:12:24 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string		getName(void) const;
		int				getGrade(void) const ;
		void			gradeUp(void);
		void			gradeDown(void);
		
		void			signForm(Form & form);

	private:
		Bureaucrat();
		std::string		_name;
		int				_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif