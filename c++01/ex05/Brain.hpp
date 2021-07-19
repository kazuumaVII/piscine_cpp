/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:10:37 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/07 15:06:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN

#include <iostream>
#include <sstream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string identify();

private:
	int 	m_qi;
	int		m_weight;

};

#endif
