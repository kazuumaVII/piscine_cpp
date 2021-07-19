/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:09 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/05 16:16:59 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"


ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

std::string		ZombieEvent::get_zombie_type() const
{
	return this->m_type;
}



void		ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}



Zombie 		*ZombieEvent::newZombie(std::string name)
{
	Zombie		*z;
	z = new Zombie();
	z->is_name(name);
	z->is_type(get_zombie_type());
	return (z);

}

Zombie		*ZombieEvent::randomChump()
{
	srand(time(0));

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
	int value;
	for (int i = 0; i < 20; i++)
	{
		value = rand() % 10 + 1;
	}
	return(newZombie(name_zombie[value]));

}
