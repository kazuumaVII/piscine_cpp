/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:48:50 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/29 18:45:21 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	return ;
}

AWeapon::AWeapon(AWeapon const &ref)
{
	*this = ref;
	return ;
}

AWeapon				&AWeapon::operator=(AWeapon const &ref)
{
	this->_name = ref._name;
	this->_apcost = ref._apcost;
	this->_damage = ref._damage;
	return (*this);
}

AWeapon::~AWeapon()
{

	return ;
}

std::string AWeapon::getName()const{return _name;}
int AWeapon::getDamage()const{return _damage;}
int AWeapon::getAPCost()const{return _apcost;}
