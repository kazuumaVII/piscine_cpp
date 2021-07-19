/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:01:20 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/02 16:02:25 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY
# define PONY

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony();

		void			my_name_and_color();
		void			action();

	private:
		std::string		m_name;
		std::string		m_color;
};


#endif
