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

#include "Span.hpp"

int main( void ) 
{
	// std::vector<int> vec1;
	// vec1.push_back(2);
	// vec1.push_back(4);

	// std::vector<int> vec2;
	// vec1.push_back(3);
	// vec1.push_back(4);

	// std::vector<int> vec3;
	// vec1.push_back(3);
	// vec1.push_back(4);

	// vec2.insert(vec2.end(), vec1.begin(), vec3.end());

	// for (std::vector<int>::iterator it = vec2.begin(); it != vec2.end(); it++)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;


	std::cout << "-- Testing adding elements over the size limit --" << std::endl;
	try
	{
		Span limit0(0);
		limit0.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n-- Testing valid spans --" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-- Testing invalid spans --" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}