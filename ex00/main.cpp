/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:03:32 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/14 19:15:07 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int error(std::string str)
{
	std::cout << RED << str << std::endl << RESET;
	return -1;
}


int main(int argc, char *argv[])
{
	std::string str;
	
	if(argc != 2)
		return error("ERROR: BAD NUMBER OF ARGUMENTS");
	str = argv[1];
	if(checkint(str))
		intconversion(str);
	else if(checkfloat(str))
		floatconversion(str);
	else if(checkchar(str))
		charconversion(str[0]);
	else if(checkdouble(str))
		doubleconversion(str);
	else
		return error("NO CONVERSION POSSIBLE");
	return 0;
}
