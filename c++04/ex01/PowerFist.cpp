/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:08:18 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 15:53:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50){}


PowerFist::PowerFist(PowerFist const &ref)
{
	*this = ref;
	return ;
}

PowerFist				&PowerFist::operator=(PowerFist const &ref)
{
	AWeapon::operator=(ref);
	return (*this);
}

PowerFist::~PowerFist()
{
	return ;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
	return ;
}
