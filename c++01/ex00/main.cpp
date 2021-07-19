/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:01:53 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/02 16:06:51 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void		ponyOnTheStack(void)
{
	Pony 	one("TOTO", "BLACK");

	one.my_name_and_color();
	one.action();

}

void		ponyOnTheHeap(void)
{
	Pony	*two = new Pony("PETIT TONERRE", "RED");

	two->my_name_and_color();
	two->action();
	delete two;
}


int main(void)
{
	std::cout << "\tIn the Stack\n";
	ponyOnTheStack();
	std::cout << "\n\tIn the Heap\n";
	ponyOnTheHeap();
}

