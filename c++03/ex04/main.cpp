/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 18:32:20 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	srand(time(NULL));

	SuperTrap	s("francois");
	NinjaTrap	n("naruto");

	std::cout << std::endl;
	// ranged
	s.rangedAttack(n.get_name());
	n.takeDamage(s.get_ranged_attack());

	// mele
	std::cout << std::endl;
	s.meleeAttack(n.get_name());
	n.takeDamage(s.get_melee_attack());

	std::cout << std::endl;
	n.beRepaired(100);

	// 2 attaque spe
	std::cout << std::endl;
	std::cout << "francois utilise la technique <vaulthunter_dot_exe>\n";
	n.takeDamage(s.vaulthunter_dot_exe(n.get_name()));

	std::cout << std::endl;
	std::cout << "francois utilise la technique <ninjaShoebox>\n";
	s.ninjaShoebox(n);

	return (0);
}
