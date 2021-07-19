/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:08:29 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/07 16:06:05 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type_w);
		~Weapon();
		const std::string &getType();
		void	setType(std::string type);

	private:
		std::string		_type;

	};



#endif
