/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:53:14 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:56:16 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string	name);
		FragTrap(FragTrap const &ref);
		~FragTrap();
		FragTrap				&operator=(FragTrap const &ref);

		unsigned int			vaulthunter_dot_exe(std::string const & target);
		int						death();
		void					random_attack(int value);

	private:
};

#endif
