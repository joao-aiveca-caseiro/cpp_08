/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:33 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/06 18:19:19 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <deque>

class MutantStack
{
	public:

		MutantStack();
		MutantStack(const MutantStack &target);
		MutantStack(unsigned int size);
		~MutantStack();

		MutantStack			&operator=(const MutantStack &target);

		
	private:

		unsigned int		_max_size;
		std::vector<int>	_contents;
};

#endif