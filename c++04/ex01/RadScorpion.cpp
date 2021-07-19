/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:55:58 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 18:23:43 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
	return ;
}


RadScorpion::RadScorpion(RadScorpion const &ref)
{
	*this = ref;
	return ;
}

RadScorpion				&RadScorpion::operator=(RadScorpion const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}


RadScorpion::~RadScorpion()
{
	
	std::cout << "* SPROTCH *\n";
	return ;
}
