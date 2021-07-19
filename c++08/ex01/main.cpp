/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:01:01 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/11 17:03:00 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span		to_number(Span sp, unsigned int nb)
{
	for (unsigned int i = 0 ; i < nb; i++)
		sp.addNumber(rand() % 100);
	return (sp);
}

int main()
{
	srand(time(NULL));
	Span sp = Span(3);

	sp = to_number(sp, 3);
	std:: cout << sp << std:: endl;
	std::cout << std::endl;
//////////////////////////////////////////////////////////////////////////////////////
	try
	{
		sp = to_number(sp, 4);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std:: cout << sp << std:: endl;
	std::cout << std::endl;
////////////////////////////////////////////////////////////////////////////////////////

	Span sp2 = Span(1000);
	try
	{
		sp2 = to_number(sp2, 1000);

	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std:: cout << "Span > 100\n";
	std::cout << std::endl;
////////////////////////////////////////////////////////////////////////////////////////

	try
	{
		Span sp3 = Span(5);

		sp3 = to_number(sp3, 5);
		std:: cout << sp3 << std:: endl;
		std::cout << "short number is = "  << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
////////////////////////////////////////////////////////////////////////////////////////

	try
	{
		Span sp4 = Span(8);
		sp4 = to_number(sp4, 8);
		std:: cout << sp4 << std:: endl;
		std::cout << "longest number is = "  << sp4.longestSpan() << std::endl;

	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
