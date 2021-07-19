/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:24:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/06 15:35:09 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

void		intern_generator(std::string name, std::string  target)
{
	Intern			i;
	Form			*f;
	Bureaucrat		b("Francois", 1);

	f = i.makeForm(name, target);
	if (f != NULL)
	{
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	return ;
}


int		main()
{
	srand (time(NULL));

	intern_generator("Presidential", "Zidane");
	std::cout << std::endl;

	intern_generator("Robotomy", "Blender");
	std::cout << std::endl;

	intern_generator("Shrubbery", "Cerisier");
	std::cout << std::endl;

	intern_generator("Goku", "Sayen");
	std::cout << std::endl;
	intern_generator("Booba", "Ourson");

	return (0);
}
