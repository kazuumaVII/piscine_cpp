/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:53:58 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 12:05:18 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "ptr = " << *ptr << std::endl;
	std::cout << "ref = " << ref << std::endl;

	return (0);

}
