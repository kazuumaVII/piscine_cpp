/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:07:39 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/04 16:32:34 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "home.hpp"
#include <iomanip>

Home::Home()
{
	nb = 0;
	return;
}



void Home::add_contact()
{
	if (nb == 8)
	{
		std::cout << "Erreur, 8 contacts maximum" << std::endl;
		return ;

	}
	std::cout << "\tMENU AJOUTER UN CONTACT" << std::endl;

	contacts[nb].create_contact();
	nb++;
	return ;
}

void Home::search_contact()
{
	int index;

	if (nb == 0)
	{
		std::cout << "Aucun contact, retour au menu" <<std::endl;
		return ;
	}
	std::cout << "\n     index|first name| last name|     login|" << std::endl;
	for (int i = 0; i < nb; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		contacts[i].info_c();
		std::cout << std::endl;
	}
	std::cout << "Select index\n";
	while (1)
	{
		std::cin >> index;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (index > 0 && index < 9)
		{
			contacts[index - 1].all_info();
			break;
		}
		else
		{
			std::cout << "Commande invalide, retour au menu" <<std::endl;

			return ;
		}
	}
	return ;


}
