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
	// testing with a vector
	std::vector<int> testVector;
	
	for (size_t i = 0; i < 5; i++)
	{
		testVector.push_back(i);
	}
	testVector.push_back(3);
	std::cout << "\nTESTING WITH VECTOR" << std::endl;
	std::vector<int>::iterator it;
	for (it = testVector.begin(); it != testVector.end(); it++)
	{
		std::cout << *it << '\t';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "-- Trying to find 3 --" << std::endl;
		easyfind(testVector, 3);
		std::cout << "-- Trying to find 13 --" << std::endl;
		easyfind(testVector, 13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	// testing with a deque
	std::deque<int> testDeque;
	
	for (size_t i = 0; i < 5; i++)
	{
		testDeque.push_front(-i);
	}
	testDeque.push_back(-3);
	std::cout << "\nTESTING WITH DEQUE" << std::endl;
	std::deque<int>::iterator it2;
	for (it2 = testDeque.begin(); it2 != testDeque.end(); it2++)
	{
		std::cout << *it2 << '\t';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "-- Trying to find -3 --" << std::endl;
		easyfind(testDeque, -3);
		std::cout << "-- Trying to find 13 --" << std::endl;
		easyfind(testDeque, 13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	// testing with a list
	std::list<int> testList;
	
	for (size_t i = 0; i < 5; i++)
	{
		testList.push_front(-i);
	}
	std::cout << "\nTESTING WITH LIST" << std::endl;
	std::list<int>::iterator it3 = testList.begin();
	std::advance(it3, 3);
	testList.insert(it3, -3);

	std::list<int>::iterator it4;
	for (it4 = testList.begin(); it4 != testList.end(); it4++)
	{
		std::cout << *it4 << '\t';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "-- Trying to find -3 --" << std::endl;
		easyfind(testList, -3);
		std::cout << "-- Trying to find 13 --" << std::endl;
		easyfind(testList, 13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}