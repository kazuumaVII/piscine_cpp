/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:41:35 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 14:54:52 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(): AMateria("cure"){}

Cure::Cure(Cure const &ref) : AMateria("cure")
{
	*this = ref;
	return ;
}

Cure				&Cure::operator=(Cure const &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

Cure::~Cure()
{
	return ;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
	return ;
}
