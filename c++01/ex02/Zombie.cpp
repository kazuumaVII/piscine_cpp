/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:03 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/05 13:52:50 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"



Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->m_name << " is dead" << std::endl;
}

void		Zombie::is_name(std::string name)
{
	this->m_name = name;
	return ;

}


void			Zombie::is_type(std::string type)
{
	this->m_type = type;
	return ;
}

void		Zombie::advert()
{

	std::cout << "<" << m_name << "(" << m_type << ")" << "> ";
	std::cout << "Braiiiiiiinnnssss ...\n";
}

