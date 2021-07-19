/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:04:47 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:45:00 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
# define  CLAPTRAP_HPP

# include <iostream>
# include <string>

class  ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &ref);
		~ClapTrap();
		ClapTrap		&operator=(ClapTrap const &ref);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		int				get_hp();
		std::string		get_name();
		int				get_ranged_attack();
		int				get_melee_attack();

	protected:
		int 			_hp;
		int				_max_hp;
		int				_energy;
		int				_max_energy;
		int				_lvl;
		std::string		_name;
		int				_dmg_cac;
		int				_dmg_cast;
		int				_armor;
};

#endif
