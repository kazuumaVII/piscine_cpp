/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:57 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:22:22 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string.h>

class	Victim
{
	public :
		Victim(std::string name);
		Victim(Victim const &ref);
		virtual ~Victim();
		Victim				&operator=(Victim const &ref);

		std::string			getName() const;
		virtual void		getPolymorphed() const;

	protected :
		Victim();
		std::string			_name;
};

std::ostream		&operator<<(std::ostream &os, Victim const &victim);

#endif
