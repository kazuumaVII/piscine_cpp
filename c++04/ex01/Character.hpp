/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:34:16 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 18:05:07 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Enemy.hpp"
# include "AWeapon.hpp"


class		Character
{
	private:
		Character();
		std::string			_name;
		AWeapon				*_weapon;
		int					_ap;

	public:
		Character(std::string const &name);
		Character(Character const &ref);
		virtual ~Character();
		Character			&operator=(Character const &ref);

		void 				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string const	getName() const;
		int					get_ap() const;
		AWeapon				*get_weapon() const;
};

std::ostream			&operator<<(std::ostream &os, Character const &c);

#endif
