/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:40:13 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 12:35:28 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public :
		TacticalMarine();
		TacticalMarine(TacticalMarine const &ref);
		~TacticalMarine();
		TacticalMarine		&operator=(TacticalMarine const &ref);
		ISpaceMarine		*clone() const;

		void				rangedAttack() const;
		void				meleeAttack() const;
		void				battleCry() const;

	private :
};

#endif
