/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:37:55 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 15:40:44 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &ref)
{
	*this = ref;
	return ;
}

SuperMutant				&SuperMutant::operator=(SuperMutant const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
	return ;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	return ;
}
