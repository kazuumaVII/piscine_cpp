/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:47:28 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 15:13:16 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_stuff[i] = NULL;
	return ;
}

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_stuff[i];
	return ;
}

Character					&Character::operator=(Character const &ref)
{
	this->_name = ref._name;
	
	for(int i = 0 ; i < 4 ; i++)
	{
		if (this->_stuff[i])
		{
			delete this->_stuff[i];
			this->_stuff[i] = NULL;
		}
		if (ref._stuff[i])
			this->_stuff[i] = ref._stuff[i]->clone();
	}
	return (*this);
}


void Character::equip(AMateria* m)
{
	if (_nb < 4 && m)
	{
		this->_stuff[_nb] = m;
		this->_nb++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_stuff[idx])
		return ;
	this->_stuff[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_stuff[idx] == NULL)
		return ;
	this->_stuff[idx]->use(target);
}

std::string const & Character::getName() const{return this->_name;}
