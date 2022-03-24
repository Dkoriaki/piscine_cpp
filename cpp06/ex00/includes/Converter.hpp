/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:19:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/24 15:25:34 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <ctype.h>
# include <iomanip>

bool		detectChar(std::string str);
bool		detectInt(std::string str);
bool		detectDouble(std::string str);
bool		detectFloat(std::string str);

void		printChar(std::string str);

bool		argParse(int ac, char **av);

#endif