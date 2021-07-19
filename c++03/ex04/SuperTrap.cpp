/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:40:20 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:58:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << name <<" joint la game\n";
	_name = name;
	_hp = FragTrap::_hp;
	_max_hp = FragTrap::_max_hp;
	_energy = NinjaTrap::_max_energy;
	_max_energy = NinjaTrap::_max_energy;
	_lvl = 1;
	_dmg_cac = NinjaTrap::_dmg_cac;
	_dmg_cast = FragTrap::_dmg_cast;
	_armor = FragTrap::_armor;
}

SuperTrap::SuperTrap(SuperTrap const &ref)
{
	*this = ref;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name << " destruction\n";
	return ;
}

SuperTrap				&SuperTrap::operator=(SuperTrap const &ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}


