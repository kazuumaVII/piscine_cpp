/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:53:14 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 16:53:12 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21){}


PlasmaRifle::PlasmaRifle(PlasmaRifle const &ref)
{
	*this = ref;
	return ;
}


PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const &ref)
{
	AWeapon::operator=(ref);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
	return ;
}
