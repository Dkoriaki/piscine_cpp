/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:29:17 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/18 15:53:16 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
		class	UnsignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		AForm();
		AForm(std::string name, int gradeSign, int gradExecute);
		AForm(AForm const & src);
		virtual ~AForm() = 0;

		AForm &	operator=(AForm const & rhs);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeExecute(void) const ;
		int				getGradeSign(void) const;
		std::string		getTarget(void) const;

		void			beSigned(Bureaucrat const & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const;


	protected:
		std::string		_target;
		std::string		_name;
		bool			_signed;
		int				_gradeSign;
		int				_gradeExecute;

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif