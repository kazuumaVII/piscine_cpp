/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:33:02 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/06 15:34:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern const &ref)
{
	*this = ref;
	return ;
}

Intern					&Intern::operator=(Intern const &ref)
{
	(void)ref;
	return (*this);
}

Intern::~Intern()
{
	return ;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form 				*f;

	typedef Form* (Intern::*funct)(std::string target);
	funct tab[] = {&Intern::creatPresident, &Intern::creatRobot, &Intern::creathrubbery};
	std::string 		names[3]= {"Presidential", "Robotomy", "Shrubbery"};

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(names[i]) == 0)
		{
			f = (this->*tab[i])(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
			return (f);
		}

	}
	std::cout << "< " <<  name << " > type inconnu\n";
	return (NULL);
}

Form *Intern::creatPresident(std::string target){return new PresidentialPardonForm(target);}
Form *Intern::creatRobot(std::string target){return new RobotomyRequestForm(target);}
Form *Intern::creathrubbery(std::string target){return new ShrubberyCreationForm (target);}
