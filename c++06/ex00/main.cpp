/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:39:36 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/09 12:02:39 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip> // set precision

void		char_convert(double input)
{
	// Contrairement au C, les cast C++ sont effectués au moyen d'opérateurs spécifiques

	// conversion de float en char
	char c = static_cast<char>(input);
	// conversion de float en int
	int i = static_cast<int>(input);

	// qui nest pas dans la table ascii
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << " entrer valeur entre 0 et 127\n";

	// si caractere pas printable
	// -> salut = string donc non
	// 0 - 32 et 127 ASCI ->non printable
	else if ((c >= 0 && c <= 32) || (c == 127))
		std::cout << "char: Non printable\n";

	else
		std::cout << "char: '" << c << "'" << std::endl;
	return ;
}

void		int_convert(double input)
{

	long int i = static_cast<long int>(input);

	if (i < INT_MIN || i > INT_MAX)
		std::cout << "int: impossible, entrer valeur entre " << INT_MIN << " et " << INT_MAX << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	return ;
}

void		float_double_convert(double input, char *str)
{
	int i = 0;
	int pv = 0;

	float f = static_cast<float>(input);

	while (*str != '.')
		str++;
	i++;
	
	while (str[i] && isdigit(str[i]))
	{
		i++;
		pv = 1;
	}
	if (pv == 1)
		i--;
	std::cout << "float: " << std::setprecision(i) << std::fixed << f << "f\n";
	std::cout << "double: " << std::setprecision(i) << std::fixed << input << std::endl;
	return ;
}


int main(int ac, char **av)
{

	char c;

	if (ac != 2)
	{
		std::cout << "Wrong number of args.\n";
		return (1);
	}
	double input = std::atof(av[1]);

	if (!isdigit(av[1][0]) && !av[1][1])
	{
		// si 1 caractere
		c = av[1][0];
		input = c;

	}

	char_convert(input);
	int_convert(input);
	float_double_convert(input, av[1]);
	return (0);
}
