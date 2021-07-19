/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:28 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 14:14:08 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include "Peon.hpp"
# include "Other.hpp"

class	Sorcerer
{
	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &ref);
		~Sorcerer();
		Sorcerer			&operator=(Sorcerer const &ref);

		std::string			getName() const;
		std::string			getTitle() const;
		void				polymorph(Victim const &victim) const;

	private :
		Sorcerer();
		std::string			_name;
		std::string			_title;
};

std::ostream		&operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif
