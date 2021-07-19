/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:06 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 17:12:54 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>
#include <string>


class		Zombie
{
	public:
		Zombie();
		~Zombie();
		void			advert();
		void			is_name(std::string name);
		void			is_type(std::string type);
		void			announcement();

	private:
		std::string		m_name;
		std::string		m_type;


};

#endif
