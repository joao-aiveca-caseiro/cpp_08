/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:40 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/03 03:58:20 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(){}

Span::Span(): _max_size(0){}

Span::Span(unsigned int size): _max_size(size){}

Span::Span(const Span &target)
{
	this->_max_size = target._max_size;
}

Span	&Span::operator=(const Span &target)
{
	if (this != &target)
	{
		this->_max_size = target._max_size;
	}
	return *this;
}

void	Span::addNumber(int number)
{
	
}