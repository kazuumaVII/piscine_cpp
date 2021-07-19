/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:34:42 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/28 16:56:30 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string.h>

class	Enemy
{
	protected:
		Enemy();
		std::string			_type;
		int					_hp;

	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &ref);
		virtual ~Enemy();
		Enemy				&operator=(Enemy const &ref);

		std::string 	getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);
};

#endif
