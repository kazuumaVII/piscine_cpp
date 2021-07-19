/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:36:32 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/17 17:01:30 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value_f = 0;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return ;
}

Fixed			&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called\n";
	this->_value_f = ref.getRawBits();
	return (*this);
}


int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value_f);
}

void			Fixed::setRawBits(int const raw)
{
	this->_value_f = raw;
	return ;
}


int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
