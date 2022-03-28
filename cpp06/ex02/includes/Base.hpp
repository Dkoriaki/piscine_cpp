/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:06:08 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/28 16:04:11 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

class	Base
{
	public:
		virtual	~Base();
};

class	A : public Base { };

class	B : public Base { };

class	C : public Base { };


#endif