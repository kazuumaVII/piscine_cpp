/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:01:19 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:16:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"


class		Squad : public ISquad
{
	public :
		Squad();
		Squad(Squad const &ref);
		~Squad();
		Squad			&operator=(Squad const &ref);

		ISpaceMarine		*getUnit(int n) const;
		int					push(ISpaceMarine *push);
		int					getCount() const;

	private :
		typedef struct	s_list
		{
			ISpaceMarine	*space_marine;
			struct s_list 	*next;
		} 				t_list;

		t_list	*l_first;
		void lstClear();

};

#endif
