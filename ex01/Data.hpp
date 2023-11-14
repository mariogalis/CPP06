/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:31:25 by magonzal          #+#    #+#             */
/*   Updated: 2023/11/14 19:32:02 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
	int	num;
};

Data *deserialize(uintptr_t temp);
uintptr_t serialize(Data *ptr);

#endif
