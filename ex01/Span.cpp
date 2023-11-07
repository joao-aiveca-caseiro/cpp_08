/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:40 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/07 15:14:29 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(){}

Span::Span(): _max_size(0){}

Span::Span(unsigned int size): _max_size(size){}

Span::Span(const Span &target)
{
	this->_max_size = target._max_size;
	this->_contents = target._contents;
}

Span	&Span::operator=(const Span &target)
{
	if (this != &target)
	{
		this->_max_size = target._max_size;
		this->_contents = target._contents;
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (_contents.size() == _max_size)
		throw AlreadyFull();
	else
		_contents.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	unsigned int span = 0;
	unsigned int shortest = std::numeric_limits<unsigned int>::max();
	if (_contents.size() < 2)
		throw NoSpanFound();
	
	std::vector<int> sorted = _contents;
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++)
	{
		if (it != sorted.begin())
		{
			span = std::abs(*it - *(it - 1));
			shortest = std::min(span, shortest);
		}
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	unsigned int longest = 0;
	if (_contents.size() < 2)
		throw NoSpanFound();
	
	longest = std::abs(*std::max_element(_contents.begin(), _contents.end()) - *std::min_element(_contents.begin(), _contents.end()));
	return (longest);
}

void	Span::printContents()
{
	std::vector<int>::iterator it;
	for (it = _contents.begin(); it != _contents.end(); it++)
	{
		std::cout << *it << '\t';
	}
	std::cout << std::endl;	
}