/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:55 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 13:13:48 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim(){}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just appeared!\n";
	_name = name;
	return ;
}

Victim::Victim(Victim const &ref)
{
	*this = ref;
	return ;
}

Victim				&Victim::operator=(Victim const &ref)
{
	this->_name = ref._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!\n";
	return ;
}

void				Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!\n";
	return ;
}

std::ostream		&operator<<(std::ostream &os, Victim const &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!\n";
	return (os);
}

std::string		Victim::getName()const { return _name;}
