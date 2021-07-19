/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:11:23 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 17:38:19 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

int				main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	
	std::cout << bob.getBrain().identify() << std::endl;


	return 0;
}
