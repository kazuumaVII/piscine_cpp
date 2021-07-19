/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:32:43 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 14:53:44 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice();
		Ice(const Ice &src);
		~Ice();
		Ice 				&operator=(Ice const &ref);

		virtual AMateria	*clone() const;
		virtual void use(ICharacter& target);

};


#endif
