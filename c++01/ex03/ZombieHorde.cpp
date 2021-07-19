/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:47 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 11:43:12 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

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

std::string type_zombie[3] =
{
	"Eau",
	"Feux",
	"Plante",
};


ZombieHorde::ZombieHorde(int n)
{
	z = new Zombie[n];
	this->nb_zombie = n;

	for (int i = 0; i < n; i++)
	{
		this->z[i].is_name(name_zombie[rand() % 20]);
		this->z[i].is_type(type_zombie[rand() % 3]);
	}

	return ;
}

void		ZombieHorde::annonce()
{
	for (int i = 0; i < nb_zombie; i++)
		this->z[i].annonce();
	return ;
}

ZombieHorde::~ZombieHorde()
{
	if (nb_zombie > 0)
        delete[] z;
	return ;
}


