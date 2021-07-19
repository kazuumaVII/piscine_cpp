/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:32:58 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/02 14:34:57 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class		Intern
{
	public:
		Intern();
		Intern(Intern const &ref);
		~Intern();
		Intern 			&operator=(Intern const &ref);

		Form			*makeForm(std::string name, std::string target);
		Form 			*creatRobot(std::string target);
		Form			*creatPresident(std::string target);
		Form			*creathrubbery(std::string target);

	
	private :

};

# endif
