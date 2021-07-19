/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:40:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/10 11:13:02 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void		iter(T  *array, int size, void (*f)(T &))
{
	if (!array)
	{
		std::cout << "(NULL)\n";
		return ;
	}
	for (int i = 0; i < size; i++)
		f(array[i]);
	return ;

}

template<typename F>
void		print_a(F str)
{
	std::cout << str << std::endl;
	return ;
}

#endif
