/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:26:34 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 12:35:36 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public :
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &ref);
		~AssaultTerminator();
		AssaultTerminator		&operator=(AssaultTerminator const &ref);

		ISpaceMarine			*clone() const;
		void					rangedAttack() const;
		void					meleeAttack() const;
		void					battleCry() const;

	private :
};

#endif
