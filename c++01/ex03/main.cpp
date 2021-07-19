/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:30 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 11:42:23 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"

int		main(void)
{
	srand(time(0));
	ZombieHorde h1(4);

	std::cout << "\n\t\tPresentation de la 1ere horde\n";
	h1.annonce();

	std::cout << "\n\t\tPresentation de la 2eme horde\n";
	ZombieHorde *h2 = new ZombieHorde(4);
	h2->annonce();

	std::cout << "\n\t\tLa 2eme horde va etre supprimé sur la heap\n";
	delete h2;

	std::cout << "\n\t\tLa 1er horde va etre supprimé sur la stack\n";
	return (0);
}

