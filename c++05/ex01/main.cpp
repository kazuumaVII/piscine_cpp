/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:24:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/01 15:56:26 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form 			*craft_f(std::string name, int sign, int exec)
{
	Form		*f;

	try
	{
		f = new Form(name, sign, exec);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (f);

}

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

int		main()
{
	Bureaucrat	*b;
	Form		*f;

	// error craft
	b = craft_b("francois", 151);
	f = craft_f("sylvain", 151, -1);
	std::cout << std::endl;

	// good craft
	b = craft_b("francois", 29);
	std::cout << *b;
	try
	{
		b->increase();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	// signed
	f = craft_f("sylvain", 30, 30);

	b->signForm(f);
	std::cout << *f;
	std::cout << *b;

	delete f;
	std::cout << std::endl;

	// not signed
	f = craft_f("flowbee", 10, 10);

	b->signForm(f);
	std::cout << *f;
	std::cout << *b;

	std::cout << std::endl;
	delete f;
	delete b;

	return (0);
}
