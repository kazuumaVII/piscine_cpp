/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:12:52 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 14:54:17 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
	// bzero((void *)this, sizeof(*this));
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->_xp = 0;
	this->_type = type;
	return ;
}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
	return ;
}

AMateria				&AMateria::operator=(AMateria const &ref)
{
	this->_xp = ref._xp;
	this->_type = ref._type;
	return (*this);
}

AMateria::~AMateria()
{
	return ;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
	return ;
}

std::string const & AMateria::getType() const {return _type;}
unsigned int AMateria::getXP() const {return _xp;}
