/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:41 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 13:13:30 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(){}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog.\n";
	return ;
}

Peon::Peon(Peon const &ref)
{
	*this = ref;
	return ;
}

Peon			&Peon::operator=(Peon const &ref)
{
	this->_name = ref.getName();
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
	return ;
}

void			Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!\n";
	return ;
}
