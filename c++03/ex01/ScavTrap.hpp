/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:56:42 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:42:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"

class	ScavTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ref);
		~ScavTrap();
		ScavTrap		&operator=(ScavTrap const &ref);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				challengeNewcomer(std::string const & target);

		int				get_hp();
		std::string		get_name();
		int				get_ranged_attack();
		int				get_melee_attack();

	private:
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
