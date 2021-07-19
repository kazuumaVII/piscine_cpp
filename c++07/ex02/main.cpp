/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:40:16 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/08 13:49:24 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main()
{
	Array<int> 				n;
	Array<int> 				array_int(5);
	Array<std::string> 		array_s(5);
	Array<int> 				array_for(5);
	Array<float>			array_float(3);

	std::cout << "\e[31m\e[1m\t\t Default Array" <<  "\e[0m\n";
	std::cout << n.size() << std::endl;

	std::cout << "\e[31m\e[1m\t\t Array 5 elements vide" <<  "\e[0m\n";
	std::cout << array_int;

	std::cout << "\e[31m\e[1m\t\t std string 5 elements" <<  "\e[0m\n";
	array_s[0] = "Salut";
	array_s[1] = "a";
	array_s[2] = "toi";
	array_s[3] = "jeune";
	array_s[4] = "entrepreneur";
	std::cout << array_s;

	std::cout << "\e[31m\e[1m\t\t Array float 3 element" <<  "\e[0m\n";
	array_float[0] = 42.32;
	array_float[1] = 4.23;
	array_float[2] = 77.77;
	std::cout << array_float;

	std::cout << "\e[31m\e[1m\t\t remplissage 5 elements" <<  "\e[0m\n";
	for (int i = 0; i < array_for.size(); i++)
		array_for[i] = i + 1;
	std::cout << array_for;

	std::cout << "\e[31m\e[1m\t\t limit of range du array_for[5]" <<  "\e[0m\n";
	try
	{
		array_for[6];
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
