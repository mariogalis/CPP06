/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:08:14 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/14 18:59:54 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# define YELLOW				"\x1b[33m"
# define RESET				"\x1b[0m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <climits>
#include <cfloat>


bool	checkchar(std::string str);
bool	checkdouble(std::string str);
bool	checkfloat(std::string str);
bool	checkint(std::string str);

void	intconversion(std::string str);
void	charconversion(char c);
void	floatconversion(std::string str);
void	doubleconversion(std::string str);


#endif
