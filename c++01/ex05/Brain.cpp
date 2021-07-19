/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:11:50 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 17:50:31 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : m_qi(120), m_weight(1500)
{

}

Brain::~Brain()
{
}


std::string		Brain::identify()
{
	std::string		address;
	std::stringstream oss;


	oss << this;
	address = oss.str();

	return (address);
}
