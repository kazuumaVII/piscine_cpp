/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:55:18 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 20:50:05 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &ref);
		~NinjaTrap();
		NinjaTrap		&operator=(NinjaTrap const &ref);

		void 			ninjaShoebox(ClapTrap &ref);
		void 			ninjaShoebox(ScavTrap &ref);
		void			ninjaShoebox(FragTrap &ref);
		void			ninjaShoebox(NinjaTrap &ref);

	private:
};

#endif
