/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:01:24 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:05:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &ref)
{
	this->c = ref.c;
	this->top = ref.top;
	return (*this);
}
