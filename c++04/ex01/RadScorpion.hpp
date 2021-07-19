/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:35:41 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 15:58:09 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion: public Enemy
{
	public :
		RadScorpion();
		RadScorpion(RadScorpion const &ref);
		~RadScorpion();
		RadScorpion		&operator=(RadScorpion const &ref);

	private :
};

#endif
