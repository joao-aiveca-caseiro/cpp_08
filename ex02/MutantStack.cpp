/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:40 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/06 18:19:50 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::~MutantStack(){}

MutantStack::MutantStack(): _max_size(0){}

MutantStack::MutantStack(unsigned int size): _max_size(size){}

MutantStack::MutantStack(const MutantStack &target)
{
	this->_max_size = target._max_size;
	this->_contents = target._contents;
}

MutantStack	&MutantStack::operator=(const MutantStack &target)
{
	if (this != &target)
	{
		this->_max_size = target._max_size;
		this->_contents = target._contents;
	}
	return *this;
}