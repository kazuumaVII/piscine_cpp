/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:19:42 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/01 16:59:21 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class		PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const &_target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm 		&operator=(PresidentialPardonForm const &ref);

		void						exec() const;
	private :
		PresidentialPardonForm();

};

#endif
