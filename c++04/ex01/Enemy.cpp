/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:22:57 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 18:23:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hp = hp;
	this->_type = type;
	return ;
}

Enemy::Enemy(Enemy const &ref)
{
	*this = ref;
	return ;
}

Enemy			&Enemy::operator=(Enemy const &ref)
{
	this->_hp = ref._hp;
	this->_type = ref._type;
	return (*this);
}

Enemy::~Enemy()
{
	bzero((void *)this, sizeof(*this));
	return ;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (this->_hp < damage)
		this->_hp = 0;
	else
		this->_hp -= damage;
	return ;
}

std::string  	Enemy::getType()const{return this->_type;}
int Enemy::getHP()const{return this->_hp;}

