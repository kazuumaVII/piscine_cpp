/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:36:03 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int			main(void)
{
	srand(time(0));

	FragTrap	f1("Francois");
	ScavTrap	s1("Scav");

	std::cout << "\n";
	f1.meleeAttack(s1.get_name());
	s1.takeDamage(f1.get_melee_attack());

	std::cout << "\n";
	std::cout << "<" << s1.get_name() << ">" << ": Si tu veux passer mon enigme il va falloir me battre\n";

	std::cout << "\n";
	s1.rangedAttack(f1.get_name());
	f1.takeDamage(s1.get_ranged_attack());

	std::cout << "\n";
	f1.meleeAttack(s1.get_name());
	s1.takeDamage(f1.get_melee_attack());
	std::cout << "\n";
	f1.meleeAttack(s1.get_name());
	s1.takeDamage(f1.get_melee_attack());
	std::cout << "\n";
	f1.meleeAttack(s1.get_name());
	s1.takeDamage(f1.get_melee_attack());

	std::cout << "\n";
	std::cout << "<" << s1.get_name() << ">" << ": Tu a gagner, si tu veux passer il faut repondre a mon engime\n";
	s1.challengeNewcomer(f1.get_name());

	return (0);
}
