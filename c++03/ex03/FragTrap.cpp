/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:53:00 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(std::string	name)
{
	std::cout << name <<" joint la game\n";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_lvl = 1;
	this->_name = name;
	this->_dmg_cac = 30;
	this->_dmg_cast = 20;
	this->_armor = 5;
}

FragTrap::FragTrap(FragTrap const &ref)
{
	*this = ref;
}

FragTrap			&FragTrap::operator=(FragTrap const &ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " destruction\n";
	return ;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int value = 0;

	for (int i = -1; i < 4; i++)
	{
		value = rand() % 5 ;
	}
	if (this->_energy < 25)
	{
		std::cout << "<" << _name << "> n'a plus d'energie\n";
		return ;
	}
	this->_energy -= 25;
	if (this->_energy < 0)
		this->_energy = 0;
	std::cout << "<" << _name << "> attaque " << "<" << target << "> " ;
	if (value == 0)
		std::cout << "avec un lance pierre\n";
	if (value == 1)
		std::cout << "avec un caillou\n";
	if (value == 2)
		std::cout << "avec un macbookpro M1 13 pouce\n";
	if (value == 3)
		std::cout << "avec une peluche\n";
	if (value == 4)
		std::cout << "avec un lance roquette\n";
	return ;

}

int		FragTrap::death()
{
	if (this->_hp == 0)
		return (-1);
	return (0);
}
