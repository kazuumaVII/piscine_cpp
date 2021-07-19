/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:01:21 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/02 16:05:15 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"


Pony::Pony(std::string name, std::string color)
{
	m_name = name;
	m_color = color;

}

Pony::~Pony()
{
    std::cout << this->m_name << " is dead" << std::endl;
}


void	Pony::my_name_and_color()
{
	std::cout << "My names is " << m_name;
	std::cout << " and i'm a " << m_color << " pony" << std::endl;
}

void	Pony::action()
{
	std::cout  << m_name << " likes to eat wheat" << " and sleep all day" << std::endl;
}
