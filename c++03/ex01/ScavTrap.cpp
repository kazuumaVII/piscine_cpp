/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:56:45 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:42:47 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name)
{

	std::cout << name <<" Defend la porte\n";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 50;
	this->_max_energy = 50;
	this->_lvl = 1;
	this->_name = name;
	this->_dmg_cac = 20;
	this->_dmg_cast = 15;
	this->_armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const &ref)
{
	*this = ref;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &ref)
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

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " a echouê\n";
	return ;
}

std::string		ScavTrap::get_name()
{
	return (this->_name);
}

int	ScavTrap::get_melee_attack()
{
	return (this->_dmg_cac);
}

int	ScavTrap::get_ranged_attack()
{
	return (this->_dmg_cast);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " a distance\n" ;
	return ;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "<" << _name << "> attaque ";
	std::cout << "<" << target << ">";
	std::cout << " au corps a corps\n" ;
	return ;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	int		dmg = amount - _armor;

	std::cout << "<" << _name << ">" << " perd " << dmg << " point de vie\n";
	this->_hp -= dmg;
	if (this->_hp  < 0)
		this->_hp = 0;
	std::cout << "PV de " << "<" << _name << ">" << " = " << _hp << std::endl;
	return ;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	int heal = amount;

	std::cout << "<" << _name << ">" << " recupere " << heal << " PV\n";
	this->_hp += heal;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << "PV de " << "<" << _name << ">" << " = " << _hp << std::endl;
}

int	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string input;
	char const *tab[]  = {"zidane", "42"};
	int value = rand() % 2;
	while(1)
	{
		if (value == 0)
		{
			std::cout << "Quel est le meilleur joueur du monde ?\n";
			std::getline(std::cin, input);
			if (input == tab[0])
			{
				std::cout << target << " a repondu juste, la partie est terminé\n";
				return (0);
			}
			else
			{
				std::cout << "Erreur\n";
				continue;
			}
		}
		if (value == 1)
		{
			std::cout << "Quel est le meilleur ecole du monde ?\n";
			std::getline(std::cin, input);
			if (input == tab[1])
			{
				std::cout << target << " a repondu juste, la partie est terminé\n";
				return (0);

			}
			else
			{
				std::cout << "Erreur\n";
				continue;
			}
		}
		std::cin.clear();
	}
	return (0);
}
