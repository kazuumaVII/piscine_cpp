/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:58:44 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:22:39 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
	public :
		Peon(std::string name);
		Peon(Peon const &ref);
		virtual ~Peon();
		Peon			&operator=(Peon const &ret);

		virtual void			getPolymorphed() const;

	private :
		Peon();
};

#endif
