/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:40:56 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 14:53:49 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure(const Cure &src);
		~Cure();
		Cure 				&operator=(Cure const &ref);

		virtual AMateria	*clone() const;
		virtual void use(ICharacter& target);

};

#endif
