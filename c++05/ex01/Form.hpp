/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:01:55 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/01 15:06:02 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class		Form
{
	public :
		Form();
		Form(std::string const &name, int sign, int exec);
		Form(Form const &ref);
		~Form();
		Form					&operator=(Form const &ref);

		void					beSigned(Bureaucrat const *bureaucrat);
		std::string				getName() const;
		bool					getStatus() const;
		int						getSignGrade() const;
		int						getExecGrade() const;

		struct					GradeTooHighException : public std::exception
		{
			const char 			*what() const throw();
		};
		struct					GradeTooLowException : public std::exception
		{
			const char 			*what() const throw();
		};

	private :

		std::string const		_name;
		bool					_statu;
		int const				_sign;
		int	const				_exec;


};

std::ostream				&operator<<(std::ostream &os, Form const &form);

#endif
