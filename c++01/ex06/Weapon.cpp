/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:08:26 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/07 16:10:04 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(std::string type_w)
{
	_type = type_w;
}

Weapon:: ~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	_type = type;
}


const std::string &Weapon:: getType()
{
	std::string &refference = _type;
	return (refference);
}
