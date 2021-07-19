/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:25:13 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/06 15:07:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string.h>
# include "Form.hpp"

class Form;

class			Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &ref);
		~Bureaucrat();
		Bureaucrat				&operator=(Bureaucrat const &ref);

		std::string const 		getName() const;
		int						getGrade() const;
		void					increase();
		void					decrease();
		void					signForm(Form *form);

		struct					GradeTooHighException : public std::exception
		{
			const char 			*what() const throw();
		};
		struct					GradeTooLowException : public std::exception
		{
			const char 			*what() const throw();
		};

	private :
		std::string 			_name;
		int						_grade;
};

std::ostream					&operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif
