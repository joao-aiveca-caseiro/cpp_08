/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:33 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/07 14:41:21 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <limits>
#include <deque>
#include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:

		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &target)
		{
			*this = target;	
		}
		MutantStack			&operator=(const MutantStack &target)
		{
			if (this != &target)
			{
				this->c = target.c;
			}
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator begin()
		{
			return (this->c.begin());	
		}
		iterator end()
		{
			return (this->c.end());	
		}
		const_iterator cbegin() const
		{
			return (this->c.begin());	
		}
		const_iterator cend() const
		{
			return (this->c.end());	
		}
		reverse_iterator rbegin()
		{
			return (this->c.rbegin());	
		}
		reverse_iterator rend()
		{
			return (this->c.rend());	
		}
		const_reverse_iterator crbegin() const
		{
			return (this->c.rbegin());	
		}
		const_reverse_iterator crend() const
		{
			return (this->c.rend());	
		}	

		void	printContainer()
		{
			typename std::stack<T>::container_type::iterator it;
			for (it = this->c.begin(); it != this->c.end(); it++)
			{
				std::cout << *it << " ";
			}
			std::cout << std::endl;
		}	
	
};

#endif