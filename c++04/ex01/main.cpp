/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:32:46 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:37:06 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	// std::cout << "\n\t\t----> other TEST <-------\n";
	// me->attack(b);
	// Enemy* c = new SuperMutant();
	// me->equip(pf);
	// me->attack(c);
	// me->attack(c);
	// std::cout << *me;
	// me->attack(c);

	// Enemy *d = new Enemy(5, "pokemon");
	// me->equip(pr);
	// me->attack(d);
	// std::cout << *me;

	return 0;
}
