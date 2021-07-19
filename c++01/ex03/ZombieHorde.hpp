/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:51 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 11:18:32 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE
# define ZOMBIEHORDE

#include "Zombie.hpp"


class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void		annonce();

	private:
		Zombie		*z;
		int			nb_zombie;
};






# endif
