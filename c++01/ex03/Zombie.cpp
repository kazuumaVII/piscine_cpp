/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:37 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 11:47:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::~Zombie()
{
	std::cout  << m_name << " is dead"   << std::endl;
}


void		Zombie::is_name(std::string name)
{
	this->m_name = name;

	return ;
}

void		Zombie::is_type(std::string type)
{
	this->m_type = type;

	return ;
}


void			Zombie::annonce()
{

	std::cout << "Zombie " << m_name << " de type " << m_type  << std::endl;
}
