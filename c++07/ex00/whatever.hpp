/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:10:25 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/10 11:11:11 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename S>
void 		swap(S &a, S & b)
{
	S swap;
	swap = a;
	a = b;
	b = swap;
	return ;
}

template<typename T>
T const 	&min(T const &a, T const &b)
{

	return (a < b ? a : b);
}

template<typename T>
T const 	&max(T const &a, T const &b)
{

	return (a > b ? a : b);
}

#endif
