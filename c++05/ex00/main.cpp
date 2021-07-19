/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:24:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/06 15:05:09 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat		*craft_b(std::string name, int grade)
{
	Bureaucrat	*b;

	try
	{
		b = new Bureaucrat(name, grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (b);
}

int				main()
{
	Bureaucrat	*b;

	b = craft_b("francois", 151);
	b = craft_b("sylvain", 0);

	std::cout << std::endl;
	b = craft_b("flowbee", 2);
	std::cout << *b;
	try
	{
		b->increase();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *b;
	try
	{
		b->increase();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		b->decrease();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *b;
	delete b;
	std::cout << std::endl;
	b = craft_b("Germain", 150);

	std::cout << *b;
	try
	{
		b->increase();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << *b;

	delete b;

	return (0);
}
