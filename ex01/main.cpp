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
	
	std::cout << "\n-- Testing adding elements over the size limit --" << std::endl;
	Span sp0(0);
	try
	{
		sp0.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n-- Testing valid spans --" << std::endl;
	Span sp1(5);
	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	try
	{
		std::cout << "shortest span: " << sp1.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-- Testing invalid spans --" << std::endl;
	Span sp2(5);
	sp2.addNumber(6);
	try
	{
		std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-- Testing adding multiple numbers at once --" << std::endl;
	std::deque<int> deq;
	deq.push_back(-5);
	deq.push_back(0);
	deq.push_back(15);
	deq.push_back(-1500);
	deq.push_back(500);

	Span sp3(5);
	sp3.addMultipleNumbers<std::deque<int> >(deq.begin(), deq.end());
	try
	{
		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-- Testing adding 100,000 numbers at once --" << std::endl;
	std::vector<int> vec;

	for (int i = 0; i < 100000; i++)
	{
		vec.push_back(i);
	}
	Span sp4(100000);
	try
	{
		sp4.addMultipleNumbers<std::vector<int> >(vec.begin(), vec.end());
		std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}