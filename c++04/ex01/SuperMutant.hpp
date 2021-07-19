/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:36:00 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 15:55:45 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public :
		SuperMutant();
		SuperMutant(SuperMutant const &ref);
		~SuperMutant();
		SuperMutant		&operator=(SuperMutant const &ref);

		void			takeDamage(int damage);

	private :
};

#endif
