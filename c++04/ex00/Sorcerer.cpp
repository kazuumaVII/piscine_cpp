/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:32 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 13:13:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born!\n";
	_name = name;
	_title = title;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &ref)
{
	*this = ref;
	return ;
}

Sorcerer			&Sorcerer::operator=(Sorcerer const &ref)
{
	this->_name = ref._name;
	this->_title = ref._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!\n";
	return ;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
	return ;
}

std::ostream		&operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and i like ponies!\n";
	return (os);
}

std::string		Sorcerer::getName()const { return _name;}
std::string		Sorcerer::getTitle()const { return _title;}
