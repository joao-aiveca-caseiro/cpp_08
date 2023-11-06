/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:33 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/06 14:29:51 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
	public:

		Span();
		Span(const Span &target);
		Span(unsigned int size);
		~Span();

		Span			&operator=(const Span &target);
		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			printContents();
		
		template <typename T>
		void	addMultipleNumbers(typename T::iterator &begin, typename T::iterator &end)
		{
			for (typename T::iterator it = begin; it != end; it++)
				addNumber(*it);
		}
		
	private:

		unsigned int		_max_size;
		std::vector<int>	_contents;
};

class AlreadyFull: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Error: Maximum storage limit reached. The number could not be added to this object.");
	}
};

class NoSpanFound: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Error: The object has less than two numbers, so no span can be calculated.");
	}
};