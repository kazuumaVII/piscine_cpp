/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:26:39 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 12:39:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* Teleports from space *\n";
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ref)
{
	*this = ref;
	return;
}

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	(void)ref;
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ...\n";
	return ;
}


ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
	return ;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
	return ;
}

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
	return ;
}
