/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:01 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/05 15:13:40 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string type_zombie[3] =
{
	"Eau",
	"Feux",
	"Plante",
};

 std::string name_zombie[20] =
{
	"Ange",
	"Swann",
	"Germain",
	"Cafrane",
	"Zidane",
	"Sylvain",
	"Schevchenko",
	"Cristiano",
	"Sacha",
	"Bertrand",
	"Dume",
	"Christian",
	"Francesca-maria",
	"Anghula-santa",
	"Cedric",
	"Anroche",
	"Amelia",
	"Yanis",
	"Goku",
	"Vegeta",

};


int main(void)
{


	Zombie 		zombie_1;

	zombie_1.is_name(name_zombie[2]);
	zombie_1.is_type(type_zombie[1]);
	zombie_1.advert();


	ZombieEvent zombie_2;

	zombie_2.setZombieType(type_zombie[0]);


	Zombie		*zombie_3;

	zombie_3 = zombie_2.newZombie(name_zombie[4]);
	zombie_3->advert();

	Zombie		*zombie_4;



	zombie_4 = zombie_2.randomChump();

	zombie_4->advert();

	delete(zombie_3);
	delete(zombie_4);

	
	return (0);
}
