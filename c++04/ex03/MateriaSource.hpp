/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:17:54 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 15:21:25 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &ref);
		~MateriaSource();
		MateriaSource 		&operator=(MateriaSource const &ref);

		virtual void 		learnMateria(AMateria*);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_materia[4];
		int 		_nb;

};

#endif
