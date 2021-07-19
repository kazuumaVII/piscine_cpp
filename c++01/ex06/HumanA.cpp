/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:08:31 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/07 16:11:03 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type)
{
	_name = name;
}

HumanA::~HumanA()
{
}


void HumanA::attack()
{
	std::cout << _name << " attack with " << _weapon.getType() << std::endl;

}
