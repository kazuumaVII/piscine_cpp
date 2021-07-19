/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:40:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:25:23 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ref)
{
	*this = ref;
	return;
}

TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &ref)
{
	(void)ref;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
	return ;
}

ISpaceMarine			*TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));

}


void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
	return ;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
	return ;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
	return ;
}




