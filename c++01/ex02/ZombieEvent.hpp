/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:11 by frfrance          #+#    #+#             */
/*   Updated: 2021/05/04 17:09:27 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
# define ZOMBIEEVENT

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include <time.h> 

class			ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		void		setZombieType(std::string type);
		Zombie 		*newZombie(std::string name);
		std::string		get_zombie_type() const;
		Zombie		*randomChump();


	private:
		std::string	m_type;


};




#endif


