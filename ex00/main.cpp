/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:02:19 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/08/16 14:58:00 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) 
{
	std::vector<int> testVector;
	
	for (size_t i = 0; i < 5; i++)
	{
		testVector.push_back(i);
	}
	testVector.push_back(3);
	std::vector<int>::iterator it;
	for (it = testVector.begin(); it != testVector.end(); it++)
	{
		std::cout << *it << '\t';
	}
	std::cout << std::endl;
	easyfind(testVector, 3);
	easyfind(testVector, 13);
	
	return 0;
}