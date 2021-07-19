/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:01:07 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:05:28 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class 		Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &ref);
		virtual ~Span();
		Span 					&operator=(Span const &ref);

		std::vector<int>		getTab() const;
		void					addNumber(unsigned int nb);
		unsigned int			shortestSpan(void);
		unsigned int			longestSpan(void);

		struct			ToFullException : std::exception
		{
			virtual const char	*what() const throw();
		};

	private:
		std::vector<int>					_vnb;
		unsigned int						_stock;
};

std::ostream 				&operator<<(std::ostream &os, Span const &ref);

# endif
