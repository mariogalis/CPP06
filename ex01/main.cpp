/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:31:23 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/14 19:49:53 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		*dat;
	uintptr_t	temp;

	dat = new Data;
	dat->num = 8;
	std::cout << "Starting num: " << dat->num << std::endl;
	temp = serialize(dat);
	delete dat;
	dat = deserialize(temp);
	std::cout << "Ending num: " << dat->num << std::endl;
	return (0);
}
