/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:27:41 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/06 11:48:17 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
	public:
		~Zombie();
		void	is_name(std::string name);
		void	is_type(std::string type);
		void			annonce();

	private:
		std::string		m_name;
		std::string		m_type;
};


# endif
