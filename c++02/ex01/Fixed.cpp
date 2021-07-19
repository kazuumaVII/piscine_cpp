/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:36:32 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/17 17:17:13 by frfrance         ###   ########.fr       */
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

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called\n";
	this->_value_f = nb << this->_nb_bit;
	return ;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called\n";
	this->_value_f = roundf(nb * (1 << this->_nb_bit));
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
	return (this->_value_f);
}

void			Fixed::setRawBits(int const raw)
{
	this->_value_f = raw;
	return ;
}

int			Fixed::toInt(void) const
{
	return (this->_value_f >> this->_nb_bit);
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_value_f / (float)(1 << this->_nb_bit));
}

std::ostream		&operator<<(std::ostream &flux, Fixed const &ref)
{
	flux << ref.toFloat();
	return (flux);
}

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0; }
