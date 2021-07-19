/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:10:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/10 11:12:14 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"


int main( void )
{
	// int a = 2;
	// int b = 3;

	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	// std::string c = "chaine1";
	// std::string d = "chaine2";

	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "--------------> SWAP string <------------------------\n";

	std::string str_1 = "coucou";
	std::string str_2 = "adieuu";

	std::cout << "\e[31m\e[1m \t\tBefore Swap" <<  "\e[0m\n";
	std::cout << "1er = "<< str_1 << "\t\t\t2eme = " << str_2 << std::endl;
	::swap(str_1, str_2);
	std::cout << "\e[31m\e[1m \t\tAfter Swap" <<  "\e[0m\n";
	std::cout << "1er = "<< str_1 << "\t\t\t2eme = " << str_2 << std::endl;


	std::cout << "----------------> SWAP int <------------------------\n\n";
	int a = 42;
	int b = 1567;

	std::cout << "\e[31m\e[1m \t\tBefore Swap" <<  "\e[0m\n";
	std::cout << "1er = "<< a << "\t\t\t2eme = " << b << std::endl;
	::swap(a, b);
	std::cout << "\e[31m\e[1m \t\tAfter Swap" <<  "\e[0m\n";
	std::cout << "1er = "<< a << "\t\t\t2eme = " << b << std::endl;


	std::cout << "----------------> MIN int <------------------------\n\n";
	a = 42;
	b = 777;
	std::cout << "\e[31m\e[1m \t\tBefore Min" <<  "\e[0m\n";
	std::cout << "1er = "<< a << "\t\t\t2eme = " << b << std::endl;
	std::cout << "\e[31m\e[1m \t\tAfter Min" <<  "\e[0m\n";
	std::cout << "Le plus petit = " << ::min( a, b ) << std::endl;


	std::cout << "----------------> MIN Egal <------------------------\n\n";
	a = 42;
	b = 42;
	std::cout << "\e[31m\e[1m \t\tBefore Min" <<  "\e[0m\n";
	std::cout << "1er = "<< a << "\t\t\t2eme = " << b << std::endl;
	std::cout << "\e[31m\e[1m \t\tAfter Min" <<  "\e[0m\n";
	std::cout << "Egal = " << ::min( a, b ) << std::endl;


	std::cout << "----------------> MAX float <------------------------\n\n";
	float f1 = 42.54;
	float f2 = 456.56745;
	std::cout << "\e[31m\e[1m \t\tBefore Max" <<  "\e[0m\n";
	std::cout << "1er = "<< f1 << "\t\t\t2eme = " << f2 << std::endl;

	std::cout << "\e[31m\e[1m \t\tAfter Max" <<  "\e[0m\n";
	std::cout << "Plus grand = " << ::max(f1, f2) << std::endl;

	return 0;
}
