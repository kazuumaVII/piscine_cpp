/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:40:23 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/25 18:33:25 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string  name);
		SuperTrap(SuperTrap const &ref);
		SuperTrap			&operator=(SuperTrap const &ref);
		~SuperTrap();

	private :
};

#endif
