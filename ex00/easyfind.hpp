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


class NotFound: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("No occurrence of the specified value was found.");
	}
};

template <typename T>
void	easyfind(T &a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it != a.end())
	{
		size_t position = std::distance(a.begin(), it);
		std::cout << "Found the first occurrence of " << b << " at index " << position << "." << std::endl;
	}
	else
		throw NotFound();
	std::cout << "No occurrence of " << b << " was found." << std::endl;
}


#endif