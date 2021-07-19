/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:43:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string	name)
{
	std::cout << name <<" rejoint la partie\n";
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
	this->_hp = ref._hp;
	this->_max_hp = ref._max_hp;
	this->_energy  = ref._energy ;
	this->_max_energy = ref._max_energy;
	this->_lvl = ref._lvl;
	this->_name = ref._name;
	this->_dmg_cac  = ref._dmg_cac ;
	this->_dmg_cast  = ref._dmg_cast ;
	this->_armor = ref._armor;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " a quitté la partie\n";
	return ;
}

std::string		FragTrap::get_name()
{
	return (this->_name);
}

int	FragTrap::get_melee_attack()
{
	return (this->_dmg_cac);
}

int	FragTrap::get_ranged_attack()
{
	return (this->_dmg_cast);
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " a distance\n" ;
	return ;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " au corps a corps\n" ;
	return ;
}

void		FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
{
	int heal = amount;

	std::cout << "<" << _name << ">" << " recupere " << heal << " PV\n";
	this->_hp += heal;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << "PV de " << "<" << _name << ">" << " = " << _hp << std::endl;
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
