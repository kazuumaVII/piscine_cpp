/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:07:22 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:22:45 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_HPP
# define OTHER_HPP

# include "Victim.hpp"

class	Other : public Victim
{
	public :
		Other(std::string name);
		Other(Other const &ref);
		virtual ~Other();
		Other			&operator=(Other const &ret);

		virtual void			getPolymorphed() const;

	private :
		Other();
};

#endif
