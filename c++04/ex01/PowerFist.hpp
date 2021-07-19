/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:35:21 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 15:08:06 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist();
		PowerFist(PowerFist const &ref);
		~PowerFist();
		PowerFist			&operator=(PowerFist const &ref);

		void				attack() const;

	private :
};

#endif
