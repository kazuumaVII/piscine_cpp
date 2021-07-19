/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:14 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:40:02 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class	FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		~FragTrap();
		FragTrap				&operator=(FragTrap const &ref);

		void					rangedAttack(std::string const & target);
		void					meleeAttack(std::string const & target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		unsigned int			vaulthunter_dot_exe(std::string const & target);
		int						death();
		void					random_attack(int value);

		int						get_hp();
		std::string				get_name();
		int						get_ranged_attack();
		int						get_melee_attack();

	private:
		int 					_hp;
		int						_max_hp;
		int						_energy;
		int						_max_energy;
		int						_lvl;
		std::string				_name;
		int						_dmg_cac;
		int						_dmg_cast;
		int						_armor;

};

#endif
