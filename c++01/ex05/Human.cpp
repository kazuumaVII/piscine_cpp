/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:12:15 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 17:40:52 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

Brain &Human::getBrain()
{
	return (this->_instanceBrain);
}

std::string		Human::identify()
{
	return (this->_instanceBrain.identify());
}
