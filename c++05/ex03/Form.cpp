/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:02:01 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/02 10:55:17 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _sign(1), _exec(1)
{
	this->_statu = false;
	return ;
}

Form::Form(std::string const &name, int sign, int exec): _name(name), _sign(sign),
			 _exec(exec)
{
	this->_statu = false;
	std::cout << this->_name << " Craft\n";
	if (this->_sign < 1 || this->_exec < 1)
		throw Form::GradeTooHighException();
	if (this->_sign > 150 || this->_exec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const &ref) : _name(ref._name), _sign(ref._sign),
			_exec(ref._exec)
{
	*this = ref;
	return ;
}

Form				&Form::operator=(Form const &ref)
{
	this->_statu = ref._statu;
	return (*this);
}

Form::~Form()
{
	std::cout << _name << " Delete\n";
	return ;
}


void					Form::beSigned(Bureaucrat const *bureaucrat)
{
	if (this->_sign < bureaucrat->getGrade())
		throw Form::GradeTooLowException();
	this->_statu = true;
	return ;
}

const char				*Form::GradeTooLowException::what() const throw()
{
	return ("< Error > Grade is to low");
}

const char 				*Form::GradeTooHighException::what() const throw()
{
	 return ("< Error > Grade is to high");
}

const char				*Form::NotSignedException::what() const throw()
{
	return "< Error > Not signed";
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->_exec)
		throw Form::GradeTooLowException();
	this->exec();
	return ;
}

std::ostream			&operator<<(std::ostream &os, Form const &form)
{
	if (form.getStatus() == true)
		os << "< " << form.getName() << "> [SIGNED]" << "\t nb sign : <" << form.getSignGrade() << ">\t nb exec : <" << form.getExecGrade() << ">\n";
	else
		os << "< " << form.getName() << "> [NOT SIGNED]" << "\t nb sign : <" << form.getSignGrade() << ">\t nb exec : <" << form.getExecGrade() << ">\n";

	return (os);
}

std::string 		Form::getName()const {return this->_name;}
std::string			Form::getTarget()const {return this->_target;}
bool				Form::getStatus()const {return this->_statu;}
int					Form::getSignGrade()const {return this->_sign;}
int					Form::getExecGrade()const {return this->_exec;}
void				Form::setTarget(std::string const &target) {this->_target = target;}



