/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:04:44 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 15:33:29 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap is ready\n";
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
	*this = ref;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name  << " ClapTrap destruction\n";
	return ;
}

ClapTrap			&ClapTrap::operator=(ClapTrap const &ref)
{
	this->_hp= ref._hp;
	this->_max_hp= ref._max_hp;
	this->_energy = ref._energy;
	this->_max_energy = ref._max_energy;
	this->_lvl= ref._lvl;
	this->_name = ref._name;
	this->_dmg_cac= ref._dmg_cac;
	this->_dmg_cast = ref._dmg_cast;
	this->_armor= ref._armor;
	return (*this);
}

std::string		ClapTrap::get_name()
{
	return (this->_name);
}

int	ClapTrap::get_melee_attack()
{
	return (this->_dmg_cac);
}

int	ClapTrap::get_ranged_attack()
{
	return (this->_dmg_cast);
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " a distance\n" ;
	return ;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " au corps a corps\n" ;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int		dmg = amount - _armor;

	if (dmg <= 0)
		dmg = 0;
	std::cout << "<" << _name << ">" << " perd " << dmg << " point de vie\n";
	this->_hp -= dmg;
	if (this->_hp  < 0)
		this->_hp = 0;
	std::cout << "PV de " << "<" << _name << ">" << " = " << _hp << std::endl;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int heal = amount;

	std::cout << "<" << _name << ">" << " recupere " << heal << " PV\n";
	this->_hp += heal;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << "PV de " << "<" << _name << ">" << " = " << _hp << std::endl;
}

