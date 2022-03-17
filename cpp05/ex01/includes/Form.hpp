/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:29:17 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/17 15:41:14 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
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
		Form(std::string name, int grade);
		Form(Form const & src);
		~Form();

		Form &	operator=(Form const & rhs);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeExecute(void) const ;
		int				getGradeSign(void) const;

		void			beSigned(Bureaucrat const & bureaucrat);


	private:
		Form();
		std::string		_name;
		bool			_signed;
		int				_gradeSign;
		int				_gradeExecute;

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif