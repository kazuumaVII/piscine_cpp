/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:36:34 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 18:34:23 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

#include <iostream>

class		Fixed
{
	public :
		Fixed();
		Fixed(Fixed const &copy);
		Fixed				&operator=(Fixed const &ref);
		~Fixed();
		int					getRawBits(void) const;
		void 				setRawBits(int const raw);

	private :
		int					_value_f;
		static const int	_nb_bit = 8;
};

#endif



