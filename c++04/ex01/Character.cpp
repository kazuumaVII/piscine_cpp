/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:41:14 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 18:41:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_ap = 40;
	return ;
}

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character			&Character::operator=(Character const &ref)
{
	this->_name = ref._name;
	this->_ap = ref._ap;
	return (*this);
}

Character::~Character()
{
	return ;
}


void		Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return ;
}

void Character::equip(AWeapon *weapon)
{
	if (this->_ap > 0)
		this->_weapon = weapon;
	return ;
}

void				Character::attack(Enemy *enemy)
{
	if (!this->_weapon)
	{
		std::cout << "NO WEAPON EQUIPED\n";
		return ;
	}
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << "NO ENERGY\n";
		return ;
	}
	if (!enemy || !enemy->getType().size())
	{
		std::cout << "ENEMY IS ALREADY DEAD\n";
		return ;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attack " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());

	if (enemy->getHP() == 0 && enemy->getType().size())
		delete enemy;

	return ;
}


std::ostream			&operator<<(std::ostream &os, Character const &c)
{
	if (c.get_weapon())
		os << c.getName() << " has " << c.get_ap() << " AP and wields a " << c.get_weapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.get_ap() << " AP and is unarmed\n";
	return (os);
}

std::string const Character::getName()const{return _name;}
int Character::get_ap()const{return _ap;}
AWeapon *Character::get_weapon()const{return _weapon;}
