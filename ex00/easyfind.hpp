/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:09:31 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 14:32:43 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T>
int	easyfind(T &a, int b)
{
	typename T::iterator it;
	int index = 0;
	for (it = a.begin(); it != a.end(); it++)
	{
		if (*it == b)
		{
			std::cout << "Found the first occurrence of " << b << " at index " << index << "." << std::endl;
			return (0);
		}
		index++;
	}
	std::cout << "No occurrence of " << b << " was found." << std::endl;
	return (1);
}


#endif