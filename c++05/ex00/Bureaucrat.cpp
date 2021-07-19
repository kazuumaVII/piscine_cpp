/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:45:59 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/01 13:54:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string const &name, int const grade)
{
	this-> _name = name;

	std::cout << this->_name << " Craft\n";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref)
{
	*this = ref;
	return ;
}

Bureaucrat				&Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_name = ref._name;
	this->_grade = ref._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " Delete\n";
	return ;
}

void					Bureaucrat::increase()
{
	if (this->_grade != 1)
		this->_grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void					Bureaucrat::decrease()
{
	if (this->_grade != 150)
		this->_grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

const char				*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("< Error > Grade is to low");
}

const char 				*Bureaucrat::GradeTooHighException::what() const throw()
{
	 return ("< Error > Grade is to high");
}


std::ostream			&operator<<(std::ostream &os, Bureaucrat const &Bureaucrat)
{
	os << "< " << Bureaucrat.getName() << " > bureaucrat grade < " << Bureaucrat.getGrade() << " >\n";
	return (os);
}

std::string const		Bureaucrat::getName()const{return _name;}
int						Bureaucrat::getGrade()const{return _grade;}
