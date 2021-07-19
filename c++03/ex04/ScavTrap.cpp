/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:56:45 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:58:00 by frfrance         ###   ########.fr       */
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
	ClapTrap::operator=(ref);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " a echouê... destruction\n";
	return ;
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
