/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 21:09:45 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int			main(void)
{
	srand(time(0));

	FragTrap	f1("Francois");
	ScavTrap	s1("Sylvain");

	std::cout << "\n";
	std::cout << "<" << s1.get_name() << ">" << ": si tu veux passer il faut battre le meilleur ninja de konoha\n";
	std::cout << "\n";

	NinjaTrap	n1("Naruto");

	n1.ninjaShoebox(s1);
	std::cout << "\n";

	f1.meleeAttack(n1.get_name());
	n1.takeDamage(f1.get_melee_attack());
	std::cout << "\n";

	n1.ninjaShoebox(n1);
	std::cout << "\n";

	n1.ninjaShoebox(f1);
	std::cout << "\n";

	n1.ninjaShoebox(s1);
	std::cout << "\n";

	return (0);
}
