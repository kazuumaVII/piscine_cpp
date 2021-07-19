/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:32:37 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 14:55:06 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice(Ice const &ref) : AMateria("ice")
{
	*this = ref;
	return ;
}

Ice				&Ice::operator=(Ice const &ref)
{
	AMateria::operator=(ref);
	return (*this);
}

Ice::~Ice()
{
	return ;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	return ;
}
