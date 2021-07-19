/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:14:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	srand(time(0));

	FragTrap	j1("Francois");
	FragTrap	j2("Sylvain");
	std::cout << "\n";
	j1.meleeAttack(j2.get_name());
	j2.takeDamage(j1.get_melee_attack());

	std::cout << "\n";
	j2.rangedAttack(j1.get_name());
	j1.takeDamage(j2.get_ranged_attack());

	std::cout << "\n";
	std::cout << "<" <<  j1.get_name() << ">" << " passe en mode Berserker\n";
	for (int i = 0; i < 3; i++)
	{
		j1.rangedAttack(j2.get_name());
		j2.takeDamage(j1.get_ranged_attack());
		if (j2.death() || j1.death())
		{
			std::cout << "<" << j2.get_name() << ">" << " est mort\n";
			return (0);
		}
	}
	std::cout << "\n";
	j2.beRepaired(50);

	std::cout << "\n";
	std::cout << "<" <<  j1.get_name() << ">" << " utilise son ultime\n";
	j2.takeDamage(j1.vaulthunter_dot_exe(j2.get_name()));
	j2.takeDamage(j1.vaulthunter_dot_exe(j2.get_name()));
	
	std::cout << "\n";
	return (0);
}
