/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:55:20 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:57:11 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << name <<" est dans l'ombre\n";
	this->_name = name;
	this->_hp = 60;
	this->_max_hp = 60;
	this->_energy = 120;
	this->_max_energy = 120;
	this->_lvl = 1;
	this->_dmg_cac = 60;
	this->_dmg_cast = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ref)
{
	*this = ref;
}

NinjaTrap				&NinjaTrap::operator=(NinjaTrap const &ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout   << "NinjaTrap destruction\n";
}

void		NinjaTrap::ninjaShoebox(ScavTrap &ref)
{
	std::cout << "<" << _name << "> lance une boule de feux a "  << ref.get_name() << std::endl;
	ref.takeDamage(this->_dmg_cast);
}

void		NinjaTrap::ninjaShoebox(FragTrap &ref)
{
	std::cout << "<" << _name << "> se soigne\n";
	ref.beRepaired(20);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &ref)
{
	std::cout << "<" << _name << "> attaque au corps a corps "  << ref.get_name() << std::endl;
	ref.takeDamage(this->_dmg_cac);
}

void		NinjaTrap::ninjaShoebox(ClapTrap &ref)
{
	std::cout << "<" << _name << "> attaque <ClapTrap>\n";
	ref.takeDamage(this->_dmg_cac);
}
