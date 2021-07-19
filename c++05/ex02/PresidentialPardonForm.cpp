/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:20:40 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/02 10:57:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential", 25, 5)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : Form("Presidential", 25, 5)
{

	*this = ref;
	return ;
}

PresidentialPardonForm					&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	Form::operator=(ref);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

	return ;
}

void								PresidentialPardonForm::exec() const
{
	std::cout << "< " << this->getTarget() << " > has been pardonned by Zafod Beeblebrox\n";
	return ;
}
