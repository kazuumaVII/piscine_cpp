/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:24:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/06 15:21:15 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"


int		main()
{
	srand (time(NULL));
	Bureaucrat		*b = new Bureaucrat("Francois", 1);
	Form			*s = new ShrubberyCreationForm("Arbuste");
	Form			*p = new PresidentialPardonForm("Sylvain");
	Form			*r = new RobotomyRequestForm("Terminator");
	std::cout << std::endl;

	// Exec sans signer
	b->executeForm(*r);
	b->executeForm(*s);
	b->executeForm(*p);
	std::cout << std::endl;

	// Signer puis exec
	b->signForm(*p);
	b->executeForm(*p);
	std::cout << std::endl;

	b->signForm(*s);
	b->executeForm(*s);
	std::cout << std::endl;

	b->signForm(*r);
	b->executeForm(*r);
	std::cout << std::endl;

	// exec sans min lvl et sans signer
	delete b;
	b = new Bureaucrat("Flowbee", 150);
	std::cout << std::endl;

	b->executeForm(*r);
	b->executeForm(*s);
	b->executeForm(*p);
	std::cout << std::endl;

	b->signForm(*p);
	b->executeForm(*p);
	std::cout << std::endl;

	delete b;
	delete s;
	delete p;
	delete r;

	return (0);
}
