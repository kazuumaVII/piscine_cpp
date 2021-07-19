/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:33:41 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/26 14:46:12 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class	AWeapon
{
	protected :
		AWeapon();
		std::string			_name;
		int					_apcost;
		int					_damage;

	public :
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &ref);
		virtual ~AWeapon();
		AWeapon				&operator=(AWeapon const &ref);

		std::string			getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void 		attack() const = 0;
};

#endif
