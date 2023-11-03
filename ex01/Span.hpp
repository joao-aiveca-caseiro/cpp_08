/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:58:33 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/11/03 03:51:35 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Span
{
	public:

		Span();
		Span(const Span &target);
		Span(unsigned int size);
		~Span();

		Span	&operator=(const Span &target);
		void	addNumber(int number);

	private:

		unsigned int	_max_size;
};

class NotFound: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("No occurrence of the specified value was found.");
	}
};