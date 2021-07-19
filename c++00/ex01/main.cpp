/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:29:00 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/04 16:41:08 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "home.hpp"


int main(void)
{
	Home			home;
	std::string		input;

	std::cout << "\t\tBienvenue dans l'annuaire\n" << std::endl;

	while (1)
	{
		std::cout << "Tapper une commande (ADD) (SEARCH) (EXIT)" << std::endl;
		getline(std::cin, input);

		if (std::cin.eof())
			exit (0);
 		if (input.compare("ADD") == 0)
		 	home.add_contact();
		else if (input.compare("SEARCH") == 0)
		 	home.search_contact();
		else if (input.compare("EXIT") == 0)
		 	break;
		else
			std::cout << "Commande invalide\n";
	}
	return (0);
}
