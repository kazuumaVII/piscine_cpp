/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:34:58 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 14:54:41 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &ref);
		~PlasmaRifle();
		PlasmaRifle			&operator=(PlasmaRifle const &ref);

		void				attack() const;

	private :
};

#endif
