/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <dkoriaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:19:50 by dkoriaki          #+#    #+#             */
/*   Updated: 2022/03/26 16:13:29 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <ctype.h>
# include <iomanip>

// Detectors

int			detectType(std::string str);
bool		detectChar(std::string str);
bool		detectInt(std::string str);
bool		detectDouble(std::string str);
bool		detectFloat(std::string str);

// Convertors

void		convertChar(std::string str);
void		convertInt(std::string str);
void		convertFloat(std::string str);
void		convertDouble(std::string str);

// Utils

bool		isPrintable(char c);
bool		argParse(int ac, char **av);


#endif