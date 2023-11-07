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

#include "MutantStack.hpp"

int main( void ) 
{
	// Basic tests //

	std::cout << "\nSubject tests: MutantStack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "iteration through the underlying container" << std::endl;
	mstack.printContainer();
	std::cout << "Testing to see if copy was successful" << std::endl;
	//std::stack<int> s(mstack);
	MutantStack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
	
	// Comparing with list //
	
	std::cout << "\nSubject tests: List (compare with above)" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator it2 = lst.begin();
	std::list<int>::iterator ite2 = lst.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	// Testing the other iterators //

	std::cout << "\nReverse iterator test" << std::endl;
	for (MutantStack<int>::reverse_iterator it3 = mstack.rbegin(); it3 != mstack.rend(); it3++)
	{
		std::cout << *it3 << " ";
	}
	std::cout << std::endl;

	std::cout << "\nConst iterator test" << std::endl;
	for (MutantStack<int>::const_iterator it4 = mstack.cbegin(); it4 != mstack.cend(); it4++)
	{
		std::cout << *it4 << " ";
		//*it4 = 5; //this won't compile
	}
	std::cout << std::endl;

	std::cout << "\nConst reverse iterator test" << std::endl;
	for (MutantStack<int>::const_reverse_iterator it5 = mstack.crbegin(); it5 != mstack.crend(); it5++)
	{
		std::cout << *it5 << " ";
		//*it5 = 5; //this won't compile
	}
	std::cout << std::endl;
	return 0;
}