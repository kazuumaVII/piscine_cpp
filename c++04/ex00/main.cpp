/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:18 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:18:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Other.hpp"

int main()
{
	Sorcerer 	robert("Robert", "the Magnificent");

	Victim 		jim("Jimmy");
	Peon 		joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	// std::cout << "\n\t\t----> other TEST <-------\n";
	// Sorcerer 	robert("Robert", "the Magnificent");

	// Victim 		jim("Jimmy");
	// Peon 		joe("Joe");
	// Other		other("Other");

	// std::cout << robert << jim << joe << other;

	// robert.polymorph(jim);
	// robert.polymorph(joe);
	// robert.polymorph(other);


	return 0;
}
