/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:12:48 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:07:19 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class		AMateria
{
	protected:
		unsigned int _xp;
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
		virtual ~AMateria();
		AMateria			&operator=(AMateria const &ref);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};




#endif
