/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:26:55 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:01:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <exception>

template<typename T>
void  easyfind(T &cont, int value)
{
	typename T::iterator it;
	typename T::iterator ite;

	it = cont.begin();
	ite =  find(it, cont.end(), value);

	if (ite == cont.end())
		throw std::logic_error("\t\tNot found");

	return;
}

# endif
