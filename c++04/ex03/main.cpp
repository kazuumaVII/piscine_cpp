/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:26:24 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 17:00:30 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"
# include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// std::cout << "\n\t\t----> other TEST <-------\n";

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());

	// ICharacter* me = new Character("me");
	// AMateria* ice;
	// AMateria* cure;
	// AMateria* fire_ball;
	// AMateria* ice_ball;

	// std::cout << "ice equiped \n";
	// ice = src->createMateria("ice");
	// me->equip(ice);
	// cure = src->createMateria("cure");
	// std::cout << "cure equiped \n";
	// me->equip(cure);
	// fire_ball = src->createMateria("cure");
	// std::cout << "fire ball equiped \n";
	// me->equip(fire_ball);

	// me->use(0, *me);
	// me->use(1, *me);
	// me->use(0, *me);
	// me->use(1, *me);
	// me->use(1, *me);
	// me->use(2, *me);

	// std::cout << std::endl;
	// std::cout << "Rien n'est equipe au 3eme emplacement\n";
	// me->use(3, *me);

	// std::cout << std::endl;
	// ice_ball = src->createMateria("ice");
	// std::cout << "ice ball equiped \n";
	// me->equip(ice_ball);
	// me->use(3, *me);
	// me->use(3, *me);
	// me->use(3, *me);
	// me->use(3, *me);

	// std::cout << std::endl;
	// std::cout << "Ice  has " << ice->getXP() << "XP" << std::endl;
	// std::cout << "Cure  has " << cure->getXP() << "XP" << std::endl;
	// std::cout << "fire ball has " << fire_ball->getXP() << "XP" << std::endl;
	// std::cout << "ice ball has " << ice_ball->getXP() << "XP" << std::endl;

	// delete me;
	// delete src;

	// system("leaks a.out");

	return 0;
}
