/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:22:00 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 15:30:02 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_nb = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	*this = ref;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
	return ;
}

MateriaSource				&MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		if (ref._materia[i])
			this->_materia[i] = ref._materia[i]->clone();
	}
	return (*this);
}

void						MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = materia->clone();
			return ;
		}
	}
	return ;
}

AMateria					*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
		{
			AMateria *ret = this->_materia[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}
