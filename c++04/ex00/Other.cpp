/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:07:29 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 14:28:03 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Other.hpp"

Other::Other(){}

Other::Other(std::string name): Victim(name)
{
	std::cout << "hello there i'm Other.\n";
	return ;
}

Other::Other(Other const &ref)
{
	*this = ref;
	return ;
}

Other			&Other::operator=(Other const &ref)
{
	this->_name = ref.getName();
	return (*this);
}

Other::~Other()
{
	std::cout << "I will come back\n";
	return ;
}

void			Other::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!\n";
	return ;
}
