/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:17:36 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/02 14:36:36 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy", 72, 45)
{
	this->setTarget(target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : Form("Robotomy", 72, 45)
{
	*this = ref;
	return ;
}

RobotomyRequestForm					&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	Form::operator=(ref);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void	RobotomyRequestForm::exec() const
{
	
	try
	{
		if (rand() % 2)
			std::cout << "BZZZZZZZZZZZBZZBZBZZZZZZZZ\n"
				<< "< " << this->getTarget() << " > has been robotomized successfully\n";
		else
			std::cout << "Failed to robotomize < "<< this->getTarget() << " >\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << ", can't be executed" << '\n';
	}
	return ;
}
