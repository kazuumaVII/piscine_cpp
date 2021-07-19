/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:36:34 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 18:41:21 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

#include <iostream>
#include <cmath>

class		Fixed
{
	public :
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed				&operator=(Fixed const &ref);
		int					getRawBits(void) const;
		void 				setRawBits(int const raw);

		int					toInt(void) const;
		float				toFloat(void) const;

	private :
		int					_value_f;
		static const int	_nb_bit = 8;
};

std::ostream		&operator<<(std::ostream &flux, Fixed const &ref);

#endif
